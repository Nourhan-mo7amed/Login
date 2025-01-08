<%==SIM:ExplicitLinesOn==%>
<%==SIM:Set:private=private==%>
<%==SIM:Set:protected=protected==%>
<%==SIM:Set:package=public==%>
<%==SIM:Set:public=public==%>
<%==SIM:ForEach:Imports==%>
#include <%==SIM:Import.Name==%>;<%==SIM:Line==%>
<%==SIM:EndFor==%>
#include "<%==SIM:Element.Name==%>.h"<%==SIM:Line==%>
<%==SIM:Line==%>
<%==SIM:If:Element.HasDocumentation==%>
/**<%==SIM:ForEach:Element.DocumentationLines==%><%==SIM:Line==%>
 *<%==SIM:DocumentationLine==%><%==SIM:Line==%>
<%==SIM:EndFor==%>*/<%==SIM:Line==%><%==SIM:Line==%>
<%==SIM:EndIf==%>
<%==SIM:ForEach:Element.Operations==%>
<%==SIM:If:Or(Operation.HasDocumentation,Operation.HasNestedDocumentation)==%>
/**<%==SIM:ForEach:Operation.DocumentationLines==%><%==SIM:Line==%>
 *<%==SIM:DocumentationLine==%><%==SIM:EndFor==%><%==SIM:Line==%><%==SIM:ForEach:Operation.Parameters==%>
 * @param <%==SIM:Parameter.Name==%> <%==SIM:ToSingleLine(Parameter.Documentation)==%><%==SIM:Line==%>
<%==SIM:EndFor==%> */ <%==SIM:Line==%>
<%==SIM:EndIf==%>
<%==SIM:If:Operation.HasReturnType==%><%==SIM:Operation.ReturnType==%><%==SIM:EndIf==%><%==SIM:IfNot:Operation.HasReturnType==%>void<%==SIM:EndIf==%> <%==SIM:Element.Name==%>::<%==SIM:Operation.Name==%> (<%==SIM:ForEach:Operation.Parameters==%><%==SIM:Parameter.Type==%> <%==SIM:Parameter.Name==%><%==SIM:IfNot:IsLastItem==%>, <%==SIM:EndIf==%><%==SIM:EndFor==%>)<%==SIM:Line==%>
{<%==SIM:StartBlock==%><%==SIM:Line==%>
    <%==SIM:Operation.SourceCodeBody==%>
            
<%==SIM:EndBlock==%><%==SIM:Line==%>
}<%==SIM:Line==%><%==SIM:Line==%>
<%==SIM:EndFor==%>
