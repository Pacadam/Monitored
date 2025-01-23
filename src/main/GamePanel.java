package main;

import java.awt.Graphics;
import java.io.IOException;

import javax.swing.JLabel;
import javax.swing.JPanel;

import gui.PrimaryGUI;

public class GamePanel extends JPanel implements Runnable{
	
	GamePanel(){
		//Main content...I think
		this.setDoubleBuffered(true);
		this.add(new JLabel("Hi."));
		//Border image
		try {
			this.add(new PrimaryGUI());
		} catch (IOException e) {
			e.printStackTrace();
		}
		this.repaint();
		
	}
	
	public void startGame() {
		
	}
	
	public void gameOver(Graphics g) {
		
	}

	@Override
	public void run() {
		// TODO Auto-generated method stub
		
	}

}
