void SlopeVsBeamPositionTruth()
{
//=========Macro generated from canvas: c/
//=========  (Fri Apr 15 15:29:52 2022) by ROOT version 6.24/06
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
   
   Double_t S12_fit_fx1029[4] = {
   0.209094,
   0.1359827,
   0.502869,
   1.004553};
   Double_t S12_fit_fy1029[4] = {
   0.0003514854,
   0.0003441644,
   0.0004495605,
   0.0005774157};
   Double_t S12_fit_fex1029[4] = {
   0.005085545,
   0.004345569,
   0.003515487,
   0.00253626};
   Double_t S12_fit_fey1029[4] = {
   1.19508e-05,
   1.021248e-05,
   8.407194e-06,
   6.122824e-06};
   TGraphErrors *gre = new TGraphErrors(4,S12_fit_fx1029,S12_fit_fy1029,S12_fit_fex1029,S12_fit_fey1029);
   gre->SetName("S12_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_fit1029 = new TH1F("Graph_S12_fit1029","",100,0.04409197,1.094634);
   Graph_S12_fit1029->SetMinimum(0.0003089932);
   Graph_S12_fit1029->SetMaximum(0.0006084972);
   Graph_S12_fit1029->SetDirectory(0);
   Graph_S12_fit1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_fit1029->SetLineColor(ci);
   Graph_S12_fit1029->GetXaxis()->CenterTitle(true);
   Graph_S12_fit1029->GetXaxis()->SetLabelFont(42);
   Graph_S12_fit1029->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_fit1029->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_fit1029->GetXaxis()->SetTitleFont(42);
   Graph_S12_fit1029->GetYaxis()->CenterTitle(true);
   Graph_S12_fit1029->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_fit1029->GetYaxis()->SetLabelFont(42);
   Graph_S12_fit1029->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_fit1029->GetYaxis()->SetTitleOffset(1.15);
   Graph_S12_fit1029->GetYaxis()->SetTitleFont(42);
   Graph_S12_fit1029->GetZaxis()->SetLabelFont(42);
   Graph_S12_fit1029->GetZaxis()->SetTitleOffset(1);
   Graph_S12_fit1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_fit1029);
   
   
   TF1 *fit1030 = new TF1("fit","[0]+[1]*x",0.1359827,1.004553, TF1::EAddToList::kNo);
   fit1030->SetFillColor(19);
   fit1030->SetFillStyle(0);
   fit1030->SetLineWidth(2);
   fit1030->SetChisquare(1.630466);
   fit1030->SetNDF(2);
   fit1030->GetXaxis()->SetLabelFont(42);
   fit1030->GetXaxis()->SetTitleOffset(1);
   fit1030->GetXaxis()->SetTitleFont(42);
   fit1030->GetYaxis()->SetLabelFont(42);
   fit1030->GetYaxis()->SetTitleFont(42);
   fit1030->SetParameter(0,0.0003058137);
   fit1030->SetParError(0,8.511481e-06);
   fit1030->SetParLimits(0,0,0);
   fit1030->SetParameter(1,0.0002717134);
   fit1030->SetParError(1,1.158586e-05);
   fit1030->SetParLimits(1,0,0);
   fit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1030);
   gre->Draw("p ");
   
   Double_t S18_fit_fx1031[4] = {
   0.5611176,
   0.4888369,
   0.8493873,
   1.336416};
   Double_t S18_fit_fy1031[4] = {
   0.000372277,
   0.0003182685,
   0.0004110203,
   0.0005499501};
   Double_t S18_fit_fex1031[4] = {
   0.005284697,
   0.004511469,
   0.003676813,
   0.002686355};
   Double_t S18_fit_fey1031[4] = {
   1.261655e-05,
   1.079064e-05,
   8.966936e-06,
   6.609242e-06};
   gre = new TGraphErrors(4,S18_fit_fx1031,S18_fit_fy1031,S18_fit_fex1031,S18_fit_fey1031);
   gre->SetName("S18_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_fit1031 = new TH1F("Graph_S18_fit1031","",100,0.3988478,1.42458);
   Graph_S18_fit1031->SetMinimum(0.0002825697);
   Graph_S18_fit1031->SetMaximum(0.0005814675);
   Graph_S18_fit1031->SetDirectory(0);
   Graph_S18_fit1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_fit1031->SetLineColor(ci);
   Graph_S18_fit1031->GetXaxis()->SetLabelFont(42);
   Graph_S18_fit1031->GetXaxis()->SetTitleOffset(1);
   Graph_S18_fit1031->GetXaxis()->SetTitleFont(42);
   Graph_S18_fit1031->GetYaxis()->SetLabelFont(42);
   Graph_S18_fit1031->GetYaxis()->SetTitleFont(42);
   Graph_S18_fit1031->GetZaxis()->SetLabelFont(42);
   Graph_S18_fit1031->GetZaxis()->SetTitleOffset(1);
   Graph_S18_fit1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_fit1031);
   
   
   TF1 *fit1032 = new TF1("fit","[0]+[1]*x",0.4888369,1.336416, TF1::EAddToList::kNo);
   fit1032->SetFillColor(19);
   fit1032->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1032->SetLineColor(ci);
   fit1032->SetLineWidth(2);
   fit1032->SetChisquare(6.294744);
   fit1032->SetNDF(2);
   fit1032->GetXaxis()->SetLabelFont(42);
   fit1032->GetXaxis()->SetTitleOffset(1);
   fit1032->GetXaxis()->SetTitleFont(42);
   fit1032->GetYaxis()->SetLabelFont(42);
   fit1032->GetYaxis()->SetTitleFont(42);
   fit1032->SetParameter(0,0.0001997986);
   fit1032->SetParError(0,1.313897e-05);
   fit1032->SetParLimits(0,0,0);
   fit1032->SetParameter(1,0.0002607098);
   fit1032->SetParError(1,1.26803e-05);
   fit1032->SetParLimits(1,0,0);
   fit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1032);
   gre->Draw("p ");
   
   Double_t S12_fit_fx1033[1] = {
   -0.08374266};
   Double_t S12_fit_fy1033[1] = {
   0.0002144197};
   Double_t S12_fit_fex1033[1] = {
   0.004379833};
   Double_t S12_fit_fey1033[1] = {
   1.101345e-05};
   gre = new TGraphErrors(1,S12_fit_fx1033,S12_fit_fy1033,S12_fit_fex1033,S12_fit_fey1033);
   gre->SetName("S12_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12_fit1033 = new TH1F("Graph_S12_fit1033","",100,-0.08899846,-0.07848686);
   Graph_S12_fit1033->SetMinimum(0.0002012036);
   Graph_S12_fit1033->SetMaximum(0.0002276358);
   Graph_S12_fit1033->SetDirectory(0);
   Graph_S12_fit1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_fit1033->SetLineColor(ci);
   Graph_S12_fit1033->GetXaxis()->SetLabelFont(42);
   Graph_S12_fit1033->GetXaxis()->SetTitleOffset(1);
   Graph_S12_fit1033->GetXaxis()->SetTitleFont(42);
   Graph_S12_fit1033->GetYaxis()->SetLabelFont(42);
   Graph_S12_fit1033->GetYaxis()->SetTitleFont(42);
   Graph_S12_fit1033->GetZaxis()->SetLabelFont(42);
   Graph_S12_fit1033->GetZaxis()->SetTitleOffset(1);
   Graph_S12_fit1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_fit1033);
   
   gre->Draw("p ");
   
   Double_t S18_fit_fx1034[1] = {
   -0.07288766};
   Double_t S18_fit_fy1034[1] = {
   0.0001797653};
   Double_t S18_fit_fex1034[1] = {
   0.004410296};
   Double_t S18_fit_fey1034[1] = {
   1.108985e-05};
   gre = new TGraphErrors(1,S18_fit_fx1034,S18_fit_fy1034,S18_fit_fex1034,S18_fit_fey1034);
   gre->SetName("S18_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S18_fit1034 = new TH1F("Graph_S18_fit1034","",100,-0.07818001,-0.0675953);
   Graph_S18_fit1034->SetMinimum(0.0001664575);
   Graph_S18_fit1034->SetMaximum(0.0001930731);
   Graph_S18_fit1034->SetDirectory(0);
   Graph_S18_fit1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_fit1034->SetLineColor(ci);
   Graph_S18_fit1034->GetXaxis()->SetLabelFont(42);
   Graph_S18_fit1034->GetXaxis()->SetTitleOffset(1);
   Graph_S18_fit1034->GetXaxis()->SetTitleFont(42);
   Graph_S18_fit1034->GetYaxis()->SetLabelFont(42);
   Graph_S18_fit1034->GetYaxis()->SetTitleFont(42);
   Graph_S18_fit1034->GetZaxis()->SetLabelFont(42);
   Graph_S18_fit1034->GetZaxis()->SetTitleOffset(1);
   Graph_S18_fit1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_fit1034);
   
   gre->Draw("p ");
   
   TF1 *fit1033 = new TF1("fit","[0]+[1]*x",0.1359827,1.004553, TF1::EAddToList::kNo);
   fit1033->SetFillColor(19);
   fit1033->SetFillStyle(0);
   fit1033->SetLineWidth(2);
   fit1033->SetChisquare(1.630466);
   fit1033->SetNDF(2);
   fit1033->GetXaxis()->SetLabelFont(42);
   fit1033->GetXaxis()->SetTitleOffset(1);
   fit1033->GetXaxis()->SetTitleFont(42);
   fit1033->GetYaxis()->SetLabelFont(42);
   fit1033->GetYaxis()->SetTitleFont(42);
   fit1033->SetParameter(0,0.0003058137);
   fit1033->SetParError(0,8.511481e-06);
   fit1033->SetParLimits(0,0,0);
   fit1033->SetParameter(1,0.0002717134);
   fit1033->SetParError(1,1.158586e-05);
   fit1033->SetParLimits(1,0,0);
   fit1033->Draw("SAME");
   
   TF1 *fit1034 = new TF1("fit","[0]+[1]*x",0.4888369,1.336416, TF1::EAddToList::kNo);
   fit1034->SetFillColor(19);
   fit1034->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1034->SetLineColor(ci);
   fit1034->SetLineWidth(2);
   fit1034->SetChisquare(6.294744);
   fit1034->SetNDF(2);
   fit1034->GetXaxis()->SetLabelFont(42);
   fit1034->GetXaxis()->SetTitleOffset(1);
   fit1034->GetXaxis()->SetTitleFont(42);
   fit1034->GetYaxis()->SetLabelFont(42);
   fit1034->GetYaxis()->SetTitleFont(42);
   fit1034->SetParameter(0,0.0001997986);
   fit1034->SetParError(0,1.313897e-05);
   fit1034->SetParLimits(0,0,0);
   fit1034->SetParameter(1,0.0002607098);
   fit1034->SetParError(1,1.26803e-05);
   fit1034->SetParLimits(1,0,0);
   fit1034->Draw("SAME");
   
   TF1 *fit1035 = new TF1("fit","[0]+[1]*x",-0.08374266,1.004553, TF1::EAddToList::kDefault);
   fit1035->SetFillColor(19);
   fit1035->SetFillStyle(0);
   fit1035->SetLineWidth(2);
   fit1035->SetLineStyle(2);
   fit1035->GetXaxis()->SetLabelFont(42);
   fit1035->GetXaxis()->SetTitleOffset(1);
   fit1035->GetXaxis()->SetTitleFont(42);
   fit1035->GetYaxis()->SetLabelFont(42);
   fit1035->GetYaxis()->SetTitleFont(42);
   fit1035->SetParameter(0,0.0003058137);
   fit1035->SetParError(0,0);
   fit1035->SetParLimits(0,0,0);
   fit1035->SetParameter(1,0.0002717134);
   fit1035->SetParError(1,0);
   fit1035->SetParLimits(1,0,0);
   fit1035->Draw("SAME");
   
   TF1 *fit1036 = new TF1("fit","[0]+[1]*x",-0.08374266,1.004553, TF1::EAddToList::kDefault);
   fit1036->SetFillColor(19);
   fit1036->SetFillStyle(0);
   fit1036->SetLineWidth(2);
   fit1036->SetLineStyle(2);
   fit1036->GetXaxis()->SetLabelFont(42);
   fit1036->GetXaxis()->SetTitleOffset(1);
   fit1036->GetXaxis()->SetTitleFont(42);
   fit1036->GetYaxis()->SetLabelFont(42);
   fit1036->GetYaxis()->SetTitleFont(42);
   fit1036->SetParameter(0,0.0003058137);
   fit1036->SetParError(0,0);
   fit1036->SetParLimits(0,0,0);
   fit1036->SetParameter(1,0.0002717134);
   fit1036->SetParError(1,0);
   fit1036->SetParLimits(1,0,0);
   fit1036->Draw("SAME");
   
   TF1 *fit1037 = new TF1("fit","[0]+[1]*x",-0.07288766,1.336416, TF1::EAddToList::kDefault);
   fit1037->SetFillColor(19);
   fit1037->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1037->SetLineColor(ci);
   fit1037->SetLineWidth(2);
   fit1037->SetLineStyle(2);
   fit1037->GetXaxis()->SetLabelFont(42);
   fit1037->GetXaxis()->SetTitleOffset(1);
   fit1037->GetXaxis()->SetTitleFont(42);
   fit1037->GetYaxis()->SetLabelFont(42);
   fit1037->GetYaxis()->SetTitleFont(42);
   fit1037->SetParameter(0,0.0001997986);
   fit1037->SetParError(0,0);
   fit1037->SetParLimits(0,0,0);
   fit1037->SetParameter(1,0.0002607098);
   fit1037->SetParError(1,0);
   fit1037->SetParLimits(1,0,0);
   fit1037->Draw("SAME");
   
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
