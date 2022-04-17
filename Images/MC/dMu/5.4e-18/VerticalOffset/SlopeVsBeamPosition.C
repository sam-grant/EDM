void SlopeVsBeamPosition()
{
//=========Macro generated from canvas: c/
//=========  (Sun Apr 17 23:21:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(-0.6,3.124999e-05,1.8,0.00071875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1[2] = {
   -0.2,
   1.4};
   Double_t _fy1[2] = {
   0,
   0};
   TGraph *graph = new TGraph(2,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle(";Vertical beam position [mm];#LT#theta_{y}#GT/p [mrad/MeV]");
   graph->SetFillStyle(1000);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,-0.36,1.56);
   Graph_Graph1->SetMinimum(0.0001);
   Graph_Graph1->SetMaximum(0.00065);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Vertical beam position [mm]");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("#LT#theta_{y}#GT/p [mrad/MeV]");
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   
   Double_t S12_fit_fx1047[4] = {
   0.209094,
   0.1359827,
   0.502869,
   1.004553};
   Double_t S12_fit_fy1047[4] = {
   0.0003470762,
   0.0003378925,
   0.000447384,
   0.0005685849};
   Double_t S12_fit_fex1047[4] = {
   0.005085545,
   0.004345569,
   0.003515487,
   0.00253626};
   Double_t S12_fit_fey1047[4] = {
   1.162656e-05,
   9.923645e-06,
   8.17223e-06,
   5.951848e-06};
   TGraphErrors *gre = new TGraphErrors(4,S12_fit_fx1047,S12_fit_fy1047,S12_fit_fex1047,S12_fit_fey1047);
   gre->SetName("S12_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_fit1047 = new TH1F("Graph_S12_fit1047","",100,0.04409197,1.094634);
   Graph_S12_fit1047->SetMinimum(0.0003033121);
   Graph_S12_fit1047->SetMaximum(0.0005991936);
   Graph_S12_fit1047->SetDirectory(0);
   Graph_S12_fit1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_fit1047->SetLineColor(ci);
   Graph_S12_fit1047->GetXaxis()->CenterTitle(true);
   Graph_S12_fit1047->GetXaxis()->SetLabelFont(42);
   Graph_S12_fit1047->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_fit1047->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_fit1047->GetXaxis()->SetTitleFont(42);
   Graph_S12_fit1047->GetYaxis()->CenterTitle(true);
   Graph_S12_fit1047->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_fit1047->GetYaxis()->SetLabelFont(42);
   Graph_S12_fit1047->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_fit1047->GetYaxis()->SetTitleOffset(1.15);
   Graph_S12_fit1047->GetYaxis()->SetTitleFont(42);
   Graph_S12_fit1047->GetZaxis()->SetLabelFont(42);
   Graph_S12_fit1047->GetZaxis()->SetTitleOffset(1);
   Graph_S12_fit1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_fit1047);
   
   
   TF1 *fit1048 = new TF1("fit","[0]+[1]*x",0.1359827,1.004553, TF1::EAddToList::kNo);
   fit1048->SetFillColor(19);
   fit1048->SetFillStyle(0);
   fit1048->SetLineWidth(2);
   fit1048->SetChisquare(2.723217);
   fit1048->SetNDF(2);
   fit1048->GetXaxis()->SetLabelFont(42);
   fit1048->GetXaxis()->SetTitleOffset(1);
   fit1048->GetXaxis()->SetTitleFont(42);
   fit1048->GetYaxis()->SetLabelFont(42);
   fit1048->GetYaxis()->SetTitleFont(42);
   fit1048->SetParameter(0,0.000302847);
   fit1048->SetParError(0,8.275262e-06);
   fit1048->SetParLimits(0,0,0);
   fit1048->SetParameter(1,0.0002666177);
   fit1048->SetParError(1,1.1264e-05);
   fit1048->SetParLimits(1,0,0);
   fit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1048);
   gre->Draw("p ");
   
   Double_t S18_fit_fx1049[4] = {
   0.5611176,
   0.4888369,
   0.8493873,
   1.336416};
   Double_t S18_fit_fy1049[4] = {
   0.000364363,
   0.0003142396,
   0.0004006697,
   0.0005423412};
   Double_t S18_fit_fex1049[4] = {
   0.005284697,
   0.004511469,
   0.003676813,
   0.002686355};
   Double_t S18_fit_fey1049[4] = {
   1.225732e-05,
   1.047896e-05,
   8.710316e-06,
   6.418501e-06};
   gre = new TGraphErrors(4,S18_fit_fx1049,S18_fit_fy1049,S18_fit_fex1049,S18_fit_fey1049);
   gre->SetName("S18_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_fit1049 = new TH1F("Graph_S18_fit1049","",100,0.3988478,1.42458);
   Graph_S18_fit1049->SetMinimum(0.0002792607);
   Graph_S18_fit1049->SetMaximum(0.0005732596);
   Graph_S18_fit1049->SetDirectory(0);
   Graph_S18_fit1049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_fit1049->SetLineColor(ci);
   Graph_S18_fit1049->GetXaxis()->SetLabelFont(42);
   Graph_S18_fit1049->GetXaxis()->SetTitleOffset(1);
   Graph_S18_fit1049->GetXaxis()->SetTitleFont(42);
   Graph_S18_fit1049->GetYaxis()->SetLabelFont(42);
   Graph_S18_fit1049->GetYaxis()->SetTitleFont(42);
   Graph_S18_fit1049->GetZaxis()->SetLabelFont(42);
   Graph_S18_fit1049->GetZaxis()->SetTitleOffset(1);
   Graph_S18_fit1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_fit1049);
   
   
   TF1 *fit1050 = new TF1("fit","[0]+[1]*x",0.4888369,1.336416, TF1::EAddToList::kNo);
   fit1050->SetFillColor(19);
   fit1050->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1050->SetLineColor(ci);
   fit1050->SetLineWidth(2);
   fit1050->SetChisquare(6.909727);
   fit1050->SetNDF(2);
   fit1050->GetXaxis()->SetLabelFont(42);
   fit1050->GetXaxis()->SetTitleOffset(1);
   fit1050->GetXaxis()->SetTitleFont(42);
   fit1050->GetYaxis()->SetLabelFont(42);
   fit1050->GetYaxis()->SetTitleFont(42);
   fit1050->SetParameter(0,0.0001936008);
   fit1050->SetParError(0,1.276511e-05);
   fit1050->SetParLimits(0,0,0);
   fit1050->SetParameter(1,0.0002591517);
   fit1050->SetParError(1,1.231882e-05);
   fit1050->SetParLimits(1,0,0);
   fit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1050);
   gre->Draw("p ");
   
   Double_t S12_fit_fx1051[1] = {
   -0.08374266};
   Double_t S12_fit_fy1051[1] = {
   0.0002088142};
   Double_t S12_fit_fex1051[1] = {
   0.004379833};
   Double_t S12_fit_fey1051[1] = {
   1.060209e-05};
   gre = new TGraphErrors(1,S12_fit_fx1051,S12_fit_fy1051,S12_fit_fex1051,S12_fit_fey1051);
   gre->SetName("S12_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12_fit1051 = new TH1F("Graph_S12_fit1051","",100,-0.08899846,-0.07848686);
   Graph_S12_fit1051->SetMinimum(0.0001960917);
   Graph_S12_fit1051->SetMaximum(0.0002215367);
   Graph_S12_fit1051->SetDirectory(0);
   Graph_S12_fit1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_fit1051->SetLineColor(ci);
   Graph_S12_fit1051->GetXaxis()->SetLabelFont(42);
   Graph_S12_fit1051->GetXaxis()->SetTitleOffset(1);
   Graph_S12_fit1051->GetXaxis()->SetTitleFont(42);
   Graph_S12_fit1051->GetYaxis()->SetLabelFont(42);
   Graph_S12_fit1051->GetYaxis()->SetTitleFont(42);
   Graph_S12_fit1051->GetZaxis()->SetLabelFont(42);
   Graph_S12_fit1051->GetZaxis()->SetTitleOffset(1);
   Graph_S12_fit1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_fit1051);
   
   gre->Draw("p ");
   
   Double_t S18_fit_fx1052[1] = {
   -0.07288766};
   Double_t S18_fit_fy1052[1] = {
   0.0001722409};
   Double_t S18_fit_fex1052[1] = {
   0.004410296};
   Double_t S18_fit_fey1052[1] = {
   1.068282e-05};
   gre = new TGraphErrors(1,S18_fit_fx1052,S18_fit_fy1052,S18_fit_fex1052,S18_fit_fey1052);
   gre->SetName("S18_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S18_fit1052 = new TH1F("Graph_S18_fit1052","",100,-0.07818001,-0.0675953);
   Graph_S18_fit1052->SetMinimum(0.0001594215);
   Graph_S18_fit1052->SetMaximum(0.0001850603);
   Graph_S18_fit1052->SetDirectory(0);
   Graph_S18_fit1052->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_fit1052->SetLineColor(ci);
   Graph_S18_fit1052->GetXaxis()->SetLabelFont(42);
   Graph_S18_fit1052->GetXaxis()->SetTitleOffset(1);
   Graph_S18_fit1052->GetXaxis()->SetTitleFont(42);
   Graph_S18_fit1052->GetYaxis()->SetLabelFont(42);
   Graph_S18_fit1052->GetYaxis()->SetTitleFont(42);
   Graph_S18_fit1052->GetZaxis()->SetLabelFont(42);
   Graph_S18_fit1052->GetZaxis()->SetTitleOffset(1);
   Graph_S18_fit1052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_fit1052);
   
   gre->Draw("p ");
   
   TF1 *fit1051 = new TF1("fit","[0]+[1]*x",0.1359827,1.004553, TF1::EAddToList::kNo);
   fit1051->SetFillColor(19);
   fit1051->SetFillStyle(0);
   fit1051->SetLineWidth(2);
   fit1051->SetChisquare(2.723217);
   fit1051->SetNDF(2);
   fit1051->GetXaxis()->SetLabelFont(42);
   fit1051->GetXaxis()->SetTitleOffset(1);
   fit1051->GetXaxis()->SetTitleFont(42);
   fit1051->GetYaxis()->SetLabelFont(42);
   fit1051->GetYaxis()->SetTitleFont(42);
   fit1051->SetParameter(0,0.000302847);
   fit1051->SetParError(0,8.275262e-06);
   fit1051->SetParLimits(0,0,0);
   fit1051->SetParameter(1,0.0002666177);
   fit1051->SetParError(1,1.1264e-05);
   fit1051->SetParLimits(1,0,0);
   fit1051->Draw("SAME");
   
   TF1 *fit1052 = new TF1("fit","[0]+[1]*x",0.4888369,1.336416, TF1::EAddToList::kNo);
   fit1052->SetFillColor(19);
   fit1052->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1052->SetLineColor(ci);
   fit1052->SetLineWidth(2);
   fit1052->SetChisquare(6.909727);
   fit1052->SetNDF(2);
   fit1052->GetXaxis()->SetLabelFont(42);
   fit1052->GetXaxis()->SetTitleOffset(1);
   fit1052->GetXaxis()->SetTitleFont(42);
   fit1052->GetYaxis()->SetLabelFont(42);
   fit1052->GetYaxis()->SetTitleFont(42);
   fit1052->SetParameter(0,0.0001936008);
   fit1052->SetParError(0,1.276511e-05);
   fit1052->SetParLimits(0,0,0);
   fit1052->SetParameter(1,0.0002591517);
   fit1052->SetParError(1,1.231882e-05);
   fit1052->SetParLimits(1,0,0);
   fit1052->Draw("SAME");
   
   TF1 *fit1053 = new TF1("fit","[0]+[1]*x",-0.08374266,1.004553, TF1::EAddToList::kDefault);
   fit1053->SetFillColor(19);
   fit1053->SetFillStyle(0);
   fit1053->SetLineWidth(2);
   fit1053->SetLineStyle(2);
   fit1053->GetXaxis()->SetLabelFont(42);
   fit1053->GetXaxis()->SetTitleOffset(1);
   fit1053->GetXaxis()->SetTitleFont(42);
   fit1053->GetYaxis()->SetLabelFont(42);
   fit1053->GetYaxis()->SetTitleFont(42);
   fit1053->SetParameter(0,0.000302847);
   fit1053->SetParError(0,0);
   fit1053->SetParLimits(0,0,0);
   fit1053->SetParameter(1,0.0002666177);
   fit1053->SetParError(1,0);
   fit1053->SetParLimits(1,0,0);
   fit1053->Draw("SAME");
   
   TF1 *fit1054 = new TF1("fit","[0]+[1]*x",-0.07288766,1.336416, TF1::EAddToList::kDefault);
   fit1054->SetFillColor(19);
   fit1054->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1054->SetLineColor(ci);
   fit1054->SetLineWidth(2);
   fit1054->SetLineStyle(2);
   fit1054->GetXaxis()->SetLabelFont(42);
   fit1054->GetXaxis()->SetTitleOffset(1);
   fit1054->GetXaxis()->SetTitleFont(42);
   fit1054->GetYaxis()->SetLabelFont(42);
   fit1054->GetYaxis()->SetTitleFont(42);
   fit1054->SetParameter(0,0.0001936008);
   fit1054->SetParError(0,0);
   fit1054->SetParLimits(0,0,0);
   fit1054->SetParameter(1,0.0002591517);
   fit1054->SetParError(1,0);
   fit1054->SetParLimits(1,0,0);
   fit1054->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.7,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_fit","Data (S12)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12_fit","Sim (S12)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_fit","Data (S18)","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_fit","Sim (S18)","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
