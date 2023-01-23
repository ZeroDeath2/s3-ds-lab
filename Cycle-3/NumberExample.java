import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class NumberExample extends JFrame {

    private JLabel numLabel, prevLabel, nextLabel;
    private JTextField numField, prevField, nextField;
    private JButton submitButton;

    public NumberExample() {
        // Set the layout of the frame
        setLayout(new FlowLayout());

        // Create and add labels
        numLabel = new JLabel("Enter a number:");
        prevLabel = new JLabel("Previous number:");
        nextLabel = new JLabel("Next number:");
        add(numLabel);
        add(prevLabel);
        add(nextLabel);

        // Create and add text fields
        numField = new JTextField(10);
        prevField = new JTextField(10);
        nextField = new JTextField(10);
        prevField.setEditable(false);
        nextField.setEditable(false);
        add(numField);
        add(prevField);
        add(nextField);

        // Create and add the submit button
        submitButton = new JButton("Submit");
        add(submitButton);

        // Add an action listener to the submit button
        submitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int num = Integer.parseInt(numField.getText());
                prevField.setText(String.valueOf(num - 1));
                nextField.setText(String.valueOf(num + 1));
            }
        });

        // Set the title of the frame
        setTitle("Number Example");

        // Set the size of the frame
        setSize(350, 150);

        // Set the default close operation
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Make the frame visible
        setVisible(true);
    }

    public static void main(String[] args) {
        new NumberExample();
    }
}
