package main;

import javax.swing.JFrame;

public class GameFrame extends JFrame{	
	
	public int screenWidth = 1620;
	public int screenHeight = 780;
	
	
	GameFrame(){
		this.add(new GamePanel());
		this.setTitle("Monitored");
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setResizable(false);
		this.setSize(screenWidth, screenHeight);
		//Fits the window around the ui
		this.setVisible(true);
		this.setLocationRelativeTo(null);
	}
}
