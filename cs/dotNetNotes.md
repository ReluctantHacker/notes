# Basic idea
- .net is a framework that supports(mainly) programming languages including C#, F#, Visual Basic(.NET).  
- .net framework also includes some subframeworks(Those subframeworks all can be developed by C#, F# and VB.NET, actually C# is the most famous and popular language of three of them.) 
  - **Windows Forms(WinForms)**: 
    - **purpose**: Building traditional desktop applications with graphical user interfaces (GUIs). Drag-and-drop UI design: Simplifies layout creation in Visual Studio.
    - **properties**: 
      - Event-driven: Relies heavily on events triggered by user actions (e.g., button clicks).
      - Drag-and-drop UI design: Simplifies layout creation in Visual Studio.
    - **structure**:
      - Applications are organized around "Forms" (e.g., Form1) where GUI elements like buttons, textboxes, etc., are placed.
      - Code-behind files manage event handlers and business logic.
  - **Windows Presentation Foundation(WPF)**:
    - **purpose**: Creating visually sophisticated and modern desktop applications. You can think that **WPF is the updated version of WinForms**, the difference is that WinForms is for something application that more simple and doesn't need beautiful UI. However, they can both us drag-and-drop to create graphical user interface.
    - **properties**:
      - XAML-based: Uses XML-like markup (XAML) to define UI elements.
      - Data binding: Easily binds UI components to data sources.
      - Supports animations and vector graphics.
    - **structure**: 
      - Separation of concerns with XAML files (UI design) and code-behind files (logic).
      - Uses "MVVM" (Model-View-ViewModel) design pattern for better code organization. 
  - **ASP.NET**:
    - **purpose**: Developing web applications and APIs. It's very similar to php's Laravel or python's Django
    - **properties**: 
      - Supports dynamic web pages and backend services.
      - Offers variations like ASP.NET WebForms, MVC, and Core.
    - **structure**:
      - MVC Pattern: Model (data), View (UI), Controller (business logic).
      - Organized into separate folders for controllers, models, and views.

# VB.net
- When you create vb.net's WinsForms, it won't see Main() anywhere in your project files. It doesn't means that vb.net not needing Main(). It is because, when you build the project, the function is automatically created, compiled, and executed. Its source code isn't stored in the project, and that's why you can't see it unless you explicitly add your own  function
- Every Function(return something) and sub(not return something) must be written in a Class or Module in VB.NET. However, in Classic VB language, a function or sub can directly excute without capture in a Class or Module. Generally speaking, VB.NET isn't compatible to classic VB, they are very similar but also different. You can say that they are different Language but kinda similar. You can't run VB code in VB.net env.
- VB(classic) is no longer actively maintained and unsupported as of April 8, 2008.
- In Microsoft Office softwares, VBA(vb application, a sub class of VB) is embedded. In LibreOffice, Python is embedded(There's also "LibreOffice Basic" embedded which is Apparently a imitation to VBA).
- "Import" statement is only exist in VB.net because VB.net work with **Namespace**, Classic VB doesn't.  "Import" statement is pretty much like the "import" statement in python, or namespace concept in c++, their main goal is the same.
- "Module" is pretty much similar as an instance of a class. The key difference is that a class can and should create an instance to be used. But Module is for directly used. You can imagine that a module is some kinda instance of a class, not exactly the same, but act pretty much similar.
- VB.NET can accept both uppercase and lowercase keywords and any variable name, which means for example "Dim", "DiM", "DIM", "dim", are all the same to VB.net. And so as any variables like for example "Dim File as String", The compiler would take "File", "file", "FILE", "filE" all the same!. Visual Basic is a **total-case-insensitive-syntax** language since Classic VB.

# DataSet(.xml, .xsd)
- XML(Extensible Markup Language) is a versatile markup language designed for carrying and storing data. It allows users to define their custom tags, making it highly flexible. XML is often used for data interchange between different systems, enabling the sharing of structured information.  HTML and XML are both descendants of an earlier markup language called SGML (Standard Generalized Markup Language). SGML is a complicated set of rules that define document structures. XML is a subset of SGML that does the same thing, using fewer rules. Since XML is a less-complicated derivative of SGML, XML is more easily implemented on large networks such as the Internet. **The primary role of XML is to define data.** [reference](https://www.geeksforgeeks.org/html-vs-xml/) [reference2](https://stackoverflow.com/questions/46325526/what-is-the-relationship-between-xml-and-html). Here's an simple example of a data that is write in XML file
```XML
<Employee>
    <ID>101</ID>
    <Name>John Doe</Name>
    <Position>Developer</Position>
</Employee>
```
- XSD(XML Schema Definition), It is a language type that define the format and structure of XML data. Here's an example of XSD file. You can see that XML doesn't define and restrict how many element an employee tag should have. ID, Name, Position. You can add something like "birthday" or what anything you want. No restriction. But with XSD it would define it. And decide datatype like int or string. You can say that XML file is just a data record without any structure. with XSD. The data would like database's table's record which is with structure(schema).
```XSD
<xs:schema xmlns:xs="http://www.w3.org/2001/XMLSchema">
    <xs:element name="Employee">
        <xs:complexType>
            <xs:sequence>
                <xs:element name="ID" type="xs:int"/>
                <xs:element name="Name" type="xs:string"/>
                <xs:element name="Position" type="xs:string"/>
            </xs:sequence>
        </xs:complexType>
    </xs:element>
</xs:schema>
```
