import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/* <applet code=Program11 height=500 width=500></applet> */
public class Program11 extends Applet implements MouseListener,MouseMotionListener{
	int varX, varY;
	String msg="";
	public void init(){
		addMouseListener(this);
		addMouseMotionListener(this);
	}
	public void mousePressed(MouseEvent me){
		msg="Mouse Pressed";
		varX = 10;
		varY = 20;
		repaint();
	}
	public void mouseReleased(MouseEvent me){
		msg="Mouse Released";
		varX = 10;
		varY = 20;
		repaint();
	}
	public void mouseEntered(MouseEvent me){
		msg="Mouse Entered";
		varX = 10;
		varY = 20;
		repaint();
	}
	public void mouseClicked(MouseEvent me){
		msg="Mouse Clicked";
		varX = 10;
		varY = 20;
		repaint();
	}
	public void mouseMoved(MouseEvent me){
		msg="Mouse moved";
		varX = 10;
		varY = 20;
		repaint();
	}
	public void mouseExited(MouseEvent me){
		msg="Mouse Exited";
		varX = 10;
		varY = 20;
		repaint();
	}
	public void mouseDragged(MouseEvent me){
		msg="*";
		varX = me.getX();
		varY = me.getY();
		showStatus("Mouse dragged at x="+varX+" y="+varY);
		repaint();
	}
	public void paint(Graphics g){
		g.drawString(msg,varX,varY);
	}
}