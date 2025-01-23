package gui;

import java.awt.Graphics;
import java.awt.Image;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;
import javax.swing.JPanel;

public class PrimaryGUI extends JPanel{
	
	private Graphics g;
	private String borderImageFile = "./src/images/border.png";
	private Image borderImage;
	
	public PrimaryGUI() throws IOException{
		try {
		//Trying to make the border GUI
		JPanel panel = new JPanel();
		g = panel.getGraphics();
		//This is how I get images, for now...
		this.borderImage = ImageIO.read(new File(borderImageFile));
		this.borderImage = getToolkit().getImage(borderImageFile);
		draw();
		} catch (IOException e) {
			//Could make a debug console in the window?
		}
	}
	
	private void draw() {
		this.g.drawImage(borderImage, 0, 0, null);
	}

}
