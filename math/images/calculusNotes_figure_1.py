import matplotlib.pyplot as plt
import matplotlib.patches as patches

# Create a new figure
fig, ax = plt.subplots()

# Define the rectangles
rectangles = [
    patches.Rectangle((0, 0), 1, 1, edgecolor='black', facecolor='lightblue', lw=1),  # 1x1 rectangle
    patches.Rectangle((0, 1), 1, 1, edgecolor='black', facecolor='lightblue', lw=1),  # 1x1 rectangle
    patches.Rectangle((1, 0), 1, 2, edgecolor='black', facecolor='lightblue', lw=1),  # 1x2 rectangle
    patches.Rectangle((0, 2), 2, 1, edgecolor='black', facecolor='lightblue', lw=1),  # 2X1 rectangle
    patches.Rectangle((2, 0), 1, 3, edgecolor='black', facecolor='lightblue', lw=1),  # 1X3 rectangle
    patches.Rectangle((0, 3), 3, 1, edgecolor='black', facecolor='lightblue', lw=1),  # 3X1 rectangle
    patches.Rectangle((3, 0), 1, 4, edgecolor='black', facecolor='lightblue', lw=1),  # 1X4 rectangle
    patches.Rectangle((0, 4), 4, 1, edgecolor='black', facecolor='lightblue', lw=1),  # 4X1 rectangle
]

# Add rectangles to the plot
for rect in rectangles:
    ax.add_patch(rect)

# set the limits of the plot
ax.set_xlim(0, 4)
ax.set_ylim(0, 5)

# set the unit length of x and y be the same
ax.set_aspect("equal")

# turn off axis
ax.axis('off')

# Add text to the rectangles
ax.text(0.5, 0.5, '1', ha='center', va='center')
ax.text(0.5, 1.5, '1', ha='center', va='center')
ax.text(1.5, 1, '2', ha='center', va='center')
ax.text(1, 2.5, '2', ha='center', va='center')
ax.text(2.5, 1.5, '3', ha='center', va='center')
ax.text(1.5, 3.5, '3', ha='center', va='center')
ax.text(3.5, 2, '4', ha='center', va='center')
ax.text(2, 4.5, '4', ha='center', va='center')

# Add custom axis labels with arrows
#ax.annotate('', xy=(0, -0.1), xytext=(4, 0), arrowprops=dict(arrowstyle='<->'))
#ax.annotate('', xy=(-0.1, 0), xytext=(0, 5), arrowprops=dict(arrowstyle='<->'))

# Add labels with arrows
ax.annotate(r"$\longleftarrow\text{n}\longrightarrow$", xy=(0.5, -0.05), xycoords='axes fraction', ha='center', va='center', fontsize=12)
ax.annotate(r"$\longleftarrow\text{n+1}\longrightarrow$", xy=(-0.05, 0.5), xycoords='axes fraction', ha='center', va='center', fontsize=12, rotation='vertical')

# Add labels with arrows
#ax.text(1, -0.1, r"$\longleftarrow\text{n}\longrightarrow$", ha='center', va='center', fontsize=12) 
#ax.text(-0.1, 1, r"$\longleftarrow\text{n+1}\longrightarrow$", ha='center', va='center', fontsize=12, rotation='vertical')

# Save the figure
plt.savefig('calculusNotes_figure_1.svg', format='svg', bbox_inches='tight', pad_inches=0)
