void SlopeVsShiftedBeamPosition()
{
//=========Macro generated from canvas: c/
//=========  (Mon Apr 18 11:40:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(-0.6,3.124999e-05,1.8,0.00071875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx2[2] = {
   -0.2,
   1.4};
   Double_t _fy2[2] = {
   0,
   0};
   TGraph *graph = new TGraph(2,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle(";Vertical beam position [mm];#LT#theta_{y}#GT/p [mrad/MeV]");
   graph->SetFillStyle(1000);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,-0.36,1.56);
   Graph_Graph2->SetMinimum(0.0001);
   Graph_Graph2->SetMaximum(0.00065);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("Vertical beam position [mm]");
   Graph_Graph2->GetXaxis()->CenterTitle(true);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("#LT#theta_{y}#GT/p [mrad/MeV]");
   Graph_Graph2->GetYaxis()->CenterTitle(true);
   Graph_Graph2->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("ap");
   
   Double_t _fx1053[4] = {
   0.5979227,
   0.5248113,
   0.8916976,
   1.393382};
   Double_t _fy1053[4] = {
   0.0003470762,
   0.0003378925,
   0.000447384,
   0.0005685849};
   Double_t _fex1053[4] = {
   0.005085545,
   0.004345569,
   0.003515487,
   0.00253626};
   Double_t _fey1053[4] = {
   1.162656e-05,
   9.923645e-06,
   8.17223e-06,
   5.951848e-06};
   TGraphErrors *gre = new TGraphErrors(4,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,0.4329206,1.483463);
   Graph_Graph1053->SetMinimum(0.0003033121);
   Graph_Graph1053->SetMaximum(0.0005991936);
   Graph_Graph1053->SetDirectory(0);
   Graph_Graph1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1053->SetLineColor(ci);
   Graph_Graph1053->GetXaxis()->CenterTitle(true);
   Graph_Graph1053->GetXaxis()->SetLabelFont(42);
   Graph_Graph1053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1053->GetXaxis()->SetTitleFont(42);
   Graph_Graph1053->GetYaxis()->CenterTitle(true);
   Graph_Graph1053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1053->GetYaxis()->SetLabelFont(42);
   Graph_Graph1053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1053->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1053->GetYaxis()->SetTitleFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelFont(42);
   Graph_Graph1053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1053);
   
   
   TF1 *new_fit1054 = new TF1("new_fit","[0]+[1]*x",0.5248113,1.393382, TF1::EAddToList::kNo);
   new_fit1054->SetFillColor(19);
   new_fit1054->SetFillStyle(0);
   new_fit1054->SetLineColor(2);
   new_fit1054->SetLineWidth(2);
   new_fit1054->SetChisquare(2.723217);
   new_fit1054->SetNDF(2);
   new_fit1054->GetXaxis()->SetLabelFont(42);
   new_fit1054->GetXaxis()->SetTitleOffset(1);
   new_fit1054->GetXaxis()->SetTitleFont(42);
   new_fit1054->GetYaxis()->SetLabelFont(42);
   new_fit1054->GetYaxis()->SetTitleFont(42);
   new_fit1054->SetParameter(0,0.0001991814);
   new_fit1054->SetParError(0,1.227628e-05);
   new_fit1054->SetParLimits(0,0,0);
   new_fit1054->SetParameter(1,0.0002666164);
   new_fit1054->SetParError(1,1.126394e-05);
   new_fit1054->SetParLimits(1,0,0);
   new_fit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(new_fit1054);
   gre->Draw("p ");
   
   Double_t S18_fit_fx1055[4] = {
   0.5611176,
   0.4888369,
   0.8493873,
   1.336416};
   Double_t S18_fit_fy1055[4] = {
   0.000364363,
   0.0003142396,
   0.0004006697,
   0.0005423412};
   Double_t S18_fit_fex1055[4] = {
   0.005284697,
   0.004511469,
   0.003676813,
   0.002686355};
   Double_t S18_fit_fey1055[4] = {
   1.225732e-05,
   1.047896e-05,
   8.710316e-06,
   6.418501e-06};
   gre = new TGraphErrors(4,S18_fit_fx1055,S18_fit_fy1055,S18_fit_fex1055,S18_fit_fey1055);
   gre->SetName("S18_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_fit1055 = new TH1F("Graph_S18_fit1055","",100,0.3988478,1.42458);
   Graph_S18_fit1055->SetMinimum(0.0002792607);
   Graph_S18_fit1055->SetMaximum(0.0005732596);
   Graph_S18_fit1055->SetDirectory(0);
   Graph_S18_fit1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_fit1055->SetLineColor(ci);
   Graph_S18_fit1055->GetXaxis()->SetLabelFont(42);
   Graph_S18_fit1055->GetXaxis()->SetTitleOffset(1);
   Graph_S18_fit1055->GetXaxis()->SetTitleFont(42);
   Graph_S18_fit1055->GetYaxis()->SetLabelFont(42);
   Graph_S18_fit1055->GetYaxis()->SetTitleFont(42);
   Graph_S18_fit1055->GetZaxis()->SetLabelFont(42);
   Graph_S18_fit1055->GetZaxis()->SetTitleOffset(1);
   Graph_S18_fit1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_fit1055);
   
   
   TF1 *fit1056 = new TF1("fit","[0]+[1]*x",0.4888369,1.336416, TF1::EAddToList::kNo);
   fit1056->SetFillColor(19);
   fit1056->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1056->SetLineColor(ci);
   fit1056->SetLineWidth(2);
   fit1056->SetChisquare(6.909727);
   fit1056->SetNDF(2);
   fit1056->GetXaxis()->SetLabelFont(42);
   fit1056->GetXaxis()->SetTitleOffset(1);
   fit1056->GetXaxis()->SetTitleFont(42);
   fit1056->GetYaxis()->SetLabelFont(42);
   fit1056->GetYaxis()->SetTitleFont(42);
   fit1056->SetParameter(0,0.0001936007);
   fit1056->SetParError(0,1.27648e-05);
   fit1056->SetParLimits(0,0,0);
   fit1056->SetParameter(1,0.0002591517);
   fit1056->SetParError(1,1.231857e-05);
   fit1056->SetParLimits(1,0,0);
   fit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1056);
   gre->Draw("p ");
   
   Double_t S12_fit_fx1057[1] = {
   -0.08374266};
   Double_t S12_fit_fy1057[1] = {
   0.0002088142};
   Double_t S12_fit_fex1057[1] = {
   0.004379833};
   Double_t S12_fit_fey1057[1] = {
   1.060209e-05};
   gre = new TGraphErrors(1,S12_fit_fx1057,S12_fit_fy1057,S12_fit_fex1057,S12_fit_fey1057);
   gre->SetName("S12_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12_fit1057 = new TH1F("Graph_S12_fit1057","",100,-0.08899846,-0.07848686);
   Graph_S12_fit1057->SetMinimum(0.0001960917);
   Graph_S12_fit1057->SetMaximum(0.0002215367);
   Graph_S12_fit1057->SetDirectory(0);
   Graph_S12_fit1057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_fit1057->SetLineColor(ci);
   Graph_S12_fit1057->GetXaxis()->SetLabelFont(42);
   Graph_S12_fit1057->GetXaxis()->SetTitleOffset(1);
   Graph_S12_fit1057->GetXaxis()->SetTitleFont(42);
   Graph_S12_fit1057->GetYaxis()->SetLabelFont(42);
   Graph_S12_fit1057->GetYaxis()->SetTitleFont(42);
   Graph_S12_fit1057->GetZaxis()->SetLabelFont(42);
   Graph_S12_fit1057->GetZaxis()->SetTitleOffset(1);
   Graph_S12_fit1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_fit1057);
   
   gre->Draw("p ");
   
   Double_t S18_fit_fx1058[1] = {
   -0.07288766};
   Double_t S18_fit_fy1058[1] = {
   0.0001722409};
   Double_t S18_fit_fex1058[1] = {
   0.004410296};
   Double_t S18_fit_fey1058[1] = {
   1.068282e-05};
   gre = new TGraphErrors(1,S18_fit_fx1058,S18_fit_fy1058,S18_fit_fex1058,S18_fit_fey1058);
   gre->SetName("S18_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S18_fit1058 = new TH1F("Graph_S18_fit1058","",100,-0.07818001,-0.0675953);
   Graph_S18_fit1058->SetMinimum(0.0001594215);
   Graph_S18_fit1058->SetMaximum(0.0001850603);
   Graph_S18_fit1058->SetDirectory(0);
   Graph_S18_fit1058->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_fit1058->SetLineColor(ci);
   Graph_S18_fit1058->GetXaxis()->SetLabelFont(42);
   Graph_S18_fit1058->GetXaxis()->SetTitleOffset(1);
   Graph_S18_fit1058->GetXaxis()->SetTitleFont(42);
   Graph_S18_fit1058->GetYaxis()->SetLabelFont(42);
   Graph_S18_fit1058->GetYaxis()->SetTitleFont(42);
   Graph_S18_fit1058->GetZaxis()->SetLabelFont(42);
   Graph_S18_fit1058->GetZaxis()->SetTitleOffset(1);
   Graph_S18_fit1058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_fit1058);
   
   gre->Draw("p ");
   
   TF1 *new_fit1057 = new TF1("new_fit","[0]+[1]*x",0.5248113,1.393382, TF1::EAddToList::kDefault);
   new_fit1057->SetFillColor(19);
   new_fit1057->SetFillStyle(0);
   new_fit1057->SetLineWidth(2);
   new_fit1057->SetChisquare(2.723217);
   new_fit1057->SetNDF(2);
   new_fit1057->GetXaxis()->SetLabelFont(42);
   new_fit1057->GetXaxis()->SetTitleOffset(1);
   new_fit1057->GetXaxis()->SetTitleFont(42);
   new_fit1057->GetYaxis()->SetLabelFont(42);
   new_fit1057->GetYaxis()->SetTitleFont(42);
   new_fit1057->SetParameter(0,0.0001991814);
   new_fit1057->SetParError(0,1.227628e-05);
   new_fit1057->SetParLimits(0,0,0);
   new_fit1057->SetParameter(1,0.0002666164);
   new_fit1057->SetParError(1,1.126394e-05);
   new_fit1057->SetParLimits(1,0,0);
   new_fit1057->Draw("SAME");
   
   TF1 *fit1058 = new TF1("fit","[0]+[1]*x",0.4888369,1.336416, TF1::EAddToList::kNo);
   fit1058->SetFillColor(19);
   fit1058->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1058->SetLineColor(ci);
   fit1058->SetLineWidth(2);
   fit1058->SetChisquare(6.909727);
   fit1058->SetNDF(2);
   fit1058->GetXaxis()->SetLabelFont(42);
   fit1058->GetXaxis()->SetTitleOffset(1);
   fit1058->GetXaxis()->SetTitleFont(42);
   fit1058->GetYaxis()->SetLabelFont(42);
   fit1058->GetYaxis()->SetTitleFont(42);
   fit1058->SetParameter(0,0.0001936007);
   fit1058->SetParError(0,1.27648e-05);
   fit1058->SetParLimits(0,0,0);
   fit1058->SetParameter(1,0.0002591517);
   fit1058->SetParError(1,1.231857e-05);
   fit1058->SetParLimits(1,0,0);
   fit1058->Draw("SAME");
   
   TF1 *fit_extrap_S121059 = new TF1("fit_extrap_S12","[0]+[1]*x",-0.08374266,0.5248113, TF1::EAddToList::kDefault);
   fit_extrap_S121059->SetFillColor(19);
   fit_extrap_S121059->SetFillStyle(0);
   fit_extrap_S121059->SetLineWidth(2);
   fit_extrap_S121059->SetLineStyle(2);
   fit_extrap_S121059->GetXaxis()->SetLabelFont(42);
   fit_extrap_S121059->GetXaxis()->SetTitleOffset(1);
   fit_extrap_S121059->GetXaxis()->SetTitleFont(42);
   fit_extrap_S121059->GetYaxis()->SetLabelFont(42);
   fit_extrap_S121059->GetYaxis()->SetTitleFont(42);
   fit_extrap_S121059->SetParameter(0,0.0001991814);
   fit_extrap_S121059->SetParError(0,0);
   fit_extrap_S121059->SetParLimits(0,0,0);
   fit_extrap_S121059->SetParameter(1,0.0002666164);
   fit_extrap_S121059->SetParError(1,0);
   fit_extrap_S121059->SetParLimits(1,0,0);
   fit_extrap_S121059->Draw("SAME");
   
   TF1 *fit_extrap_S181060 = new TF1("fit_extrap_S18","[0]+[1]*x",-0.07288766,0.4888369, TF1::EAddToList::kDefault);
   fit_extrap_S181060->SetFillColor(19);
   fit_extrap_S181060->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit_extrap_S181060->SetLineColor(ci);
   fit_extrap_S181060->SetLineWidth(2);
   fit_extrap_S181060->SetLineStyle(2);
   fit_extrap_S181060->GetXaxis()->SetLabelFont(42);
   fit_extrap_S181060->GetXaxis()->SetTitleOffset(1);
   fit_extrap_S181060->GetXaxis()->SetTitleFont(42);
   fit_extrap_S181060->GetYaxis()->SetLabelFont(42);
   fit_extrap_S181060->GetYaxis()->SetTitleFont(42);
   fit_extrap_S181060->SetParameter(0,0.0001936007);
   fit_extrap_S181060->SetParError(0,0);
   fit_extrap_S181060->SetParLimits(0,0,0);
   fit_extrap_S181060->SetParameter(1,0.0002591517);
   fit_extrap_S181060->SetParError(1,0);
   fit_extrap_S181060->SetParLimits(1,0,0);
   fit_extrap_S181060->Draw("SAME");
   
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
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_fit","Sim (S12)","lpf");
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
