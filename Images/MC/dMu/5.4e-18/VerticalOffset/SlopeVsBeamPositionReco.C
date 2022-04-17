void SlopeVsBeamPositionReco()
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
   
   Double_t S12_fit_fx1035[4] = {
   0.209094,
   0.1359827,
   0.502869,
   1.004553};
   Double_t S12_fit_fy1035[4] = {
   0.0003514854,
   0.0003441644,
   0.0004495605,
   0.0005774157};
   Double_t S12_fit_fex1035[4] = {
   0.005085545,
   0.004345569,
   0.003515487,
   0.00253626};
   Double_t S12_fit_fey1035[4] = {
   1.19508e-05,
   1.021248e-05,
   8.407194e-06,
   6.122824e-06};
   TGraphErrors *gre = new TGraphErrors(4,S12_fit_fx1035,S12_fit_fy1035,S12_fit_fex1035,S12_fit_fey1035);
   gre->SetName("S12_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_fit1035 = new TH1F("Graph_S12_fit1035","",100,0.04409197,1.094634);
   Graph_S12_fit1035->SetMinimum(0.0003089932);
   Graph_S12_fit1035->SetMaximum(0.0006084972);
   Graph_S12_fit1035->SetDirectory(0);
   Graph_S12_fit1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_fit1035->SetLineColor(ci);
   Graph_S12_fit1035->GetXaxis()->CenterTitle(true);
   Graph_S12_fit1035->GetXaxis()->SetLabelFont(42);
   Graph_S12_fit1035->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_fit1035->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_fit1035->GetXaxis()->SetTitleFont(42);
   Graph_S12_fit1035->GetYaxis()->CenterTitle(true);
   Graph_S12_fit1035->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_fit1035->GetYaxis()->SetLabelFont(42);
   Graph_S12_fit1035->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_fit1035->GetYaxis()->SetTitleOffset(1.15);
   Graph_S12_fit1035->GetYaxis()->SetTitleFont(42);
   Graph_S12_fit1035->GetZaxis()->SetLabelFont(42);
   Graph_S12_fit1035->GetZaxis()->SetTitleOffset(1);
   Graph_S12_fit1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_fit1035);
   
   
   TF1 *fit1036 = new TF1("fit","[0]+[1]*x",0.1359827,1.004553, TF1::EAddToList::kNo);
   fit1036->SetFillColor(19);
   fit1036->SetFillStyle(0);
   fit1036->SetLineWidth(2);
   fit1036->SetChisquare(1.630466);
   fit1036->SetNDF(2);
   fit1036->GetXaxis()->SetLabelFont(42);
   fit1036->GetXaxis()->SetTitleOffset(1);
   fit1036->GetXaxis()->SetTitleFont(42);
   fit1036->GetYaxis()->SetLabelFont(42);
   fit1036->GetYaxis()->SetTitleFont(42);
   fit1036->SetParameter(0,0.0003058137);
   fit1036->SetParError(0,8.511481e-06);
   fit1036->SetParLimits(0,0,0);
   fit1036->SetParameter(1,0.0002717134);
   fit1036->SetParError(1,1.158586e-05);
   fit1036->SetParLimits(1,0,0);
   fit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1036);
   gre->Draw("p ");
   
   Double_t S18_fit_fx1037[4] = {
   0.5611176,
   0.4888369,
   0.8493873,
   1.336416};
   Double_t S18_fit_fy1037[4] = {
   0.000372277,
   0.0003182685,
   0.0004110203,
   0.0005499501};
   Double_t S18_fit_fex1037[4] = {
   0.005284697,
   0.004511469,
   0.003676813,
   0.002686355};
   Double_t S18_fit_fey1037[4] = {
   1.261655e-05,
   1.079064e-05,
   8.966936e-06,
   6.609242e-06};
   gre = new TGraphErrors(4,S18_fit_fx1037,S18_fit_fy1037,S18_fit_fex1037,S18_fit_fey1037);
   gre->SetName("S18_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_fit1037 = new TH1F("Graph_S18_fit1037","",100,0.3988478,1.42458);
   Graph_S18_fit1037->SetMinimum(0.0002825697);
   Graph_S18_fit1037->SetMaximum(0.0005814675);
   Graph_S18_fit1037->SetDirectory(0);
   Graph_S18_fit1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_fit1037->SetLineColor(ci);
   Graph_S18_fit1037->GetXaxis()->SetLabelFont(42);
   Graph_S18_fit1037->GetXaxis()->SetTitleOffset(1);
   Graph_S18_fit1037->GetXaxis()->SetTitleFont(42);
   Graph_S18_fit1037->GetYaxis()->SetLabelFont(42);
   Graph_S18_fit1037->GetYaxis()->SetTitleFont(42);
   Graph_S18_fit1037->GetZaxis()->SetLabelFont(42);
   Graph_S18_fit1037->GetZaxis()->SetTitleOffset(1);
   Graph_S18_fit1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_fit1037);
   
   
   TF1 *fit1038 = new TF1("fit","[0]+[1]*x",0.4888369,1.336416, TF1::EAddToList::kNo);
   fit1038->SetFillColor(19);
   fit1038->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1038->SetLineColor(ci);
   fit1038->SetLineWidth(2);
   fit1038->SetChisquare(6.294744);
   fit1038->SetNDF(2);
   fit1038->GetXaxis()->SetLabelFont(42);
   fit1038->GetXaxis()->SetTitleOffset(1);
   fit1038->GetXaxis()->SetTitleFont(42);
   fit1038->GetYaxis()->SetLabelFont(42);
   fit1038->GetYaxis()->SetTitleFont(42);
   fit1038->SetParameter(0,0.0001997986);
   fit1038->SetParError(0,1.313897e-05);
   fit1038->SetParLimits(0,0,0);
   fit1038->SetParameter(1,0.0002607098);
   fit1038->SetParError(1,1.26803e-05);
   fit1038->SetParLimits(1,0,0);
   fit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1038);
   gre->Draw("p ");
   
   Double_t S12_fit_fx1039[1] = {
   -0.08374266};
   Double_t S12_fit_fy1039[1] = {
   0.0002308283};
   Double_t S12_fit_fex1039[1] = {
   0.004379833};
   Double_t S12_fit_fey1039[1] = {
   1.1062e-05};
   gre = new TGraphErrors(1,S12_fit_fx1039,S12_fit_fy1039,S12_fit_fex1039,S12_fit_fey1039);
   gre->SetName("S12_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12_fit1039 = new TH1F("Graph_S12_fit1039","",100,-0.08899846,-0.07848686);
   Graph_S12_fit1039->SetMinimum(0.0002175539);
   Graph_S12_fit1039->SetMaximum(0.0002441027);
   Graph_S12_fit1039->SetDirectory(0);
   Graph_S12_fit1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_fit1039->SetLineColor(ci);
   Graph_S12_fit1039->GetXaxis()->SetLabelFont(42);
   Graph_S12_fit1039->GetXaxis()->SetTitleOffset(1);
   Graph_S12_fit1039->GetXaxis()->SetTitleFont(42);
   Graph_S12_fit1039->GetYaxis()->SetLabelFont(42);
   Graph_S12_fit1039->GetYaxis()->SetTitleFont(42);
   Graph_S12_fit1039->GetZaxis()->SetLabelFont(42);
   Graph_S12_fit1039->GetZaxis()->SetTitleOffset(1);
   Graph_S12_fit1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_fit1039);
   
   gre->Draw("p ");
   
   Double_t S18_fit_fx1040[1] = {
   -0.07288766};
   Double_t S18_fit_fy1040[1] = {
   0.0001692734};
   Double_t S18_fit_fex1040[1] = {
   0.004410296};
   Double_t S18_fit_fey1040[1] = {
   1.113603e-05};
   gre = new TGraphErrors(1,S18_fit_fx1040,S18_fit_fy1040,S18_fit_fex1040,S18_fit_fey1040);
   gre->SetName("S18_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S18_fit1040 = new TH1F("Graph_S18_fit1040","",100,-0.07818001,-0.0675953);
   Graph_S18_fit1040->SetMinimum(0.0001559102);
   Graph_S18_fit1040->SetMaximum(0.0001826367);
   Graph_S18_fit1040->SetDirectory(0);
   Graph_S18_fit1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_fit1040->SetLineColor(ci);
   Graph_S18_fit1040->GetXaxis()->SetLabelFont(42);
   Graph_S18_fit1040->GetXaxis()->SetTitleOffset(1);
   Graph_S18_fit1040->GetXaxis()->SetTitleFont(42);
   Graph_S18_fit1040->GetYaxis()->SetLabelFont(42);
   Graph_S18_fit1040->GetYaxis()->SetTitleFont(42);
   Graph_S18_fit1040->GetZaxis()->SetLabelFont(42);
   Graph_S18_fit1040->GetZaxis()->SetTitleOffset(1);
   Graph_S18_fit1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_fit1040);
   
   gre->Draw("p ");
   
   TF1 *fit1039 = new TF1("fit","[0]+[1]*x",0.1359827,1.004553, TF1::EAddToList::kNo);
   fit1039->SetFillColor(19);
   fit1039->SetFillStyle(0);
   fit1039->SetLineWidth(2);
   fit1039->SetChisquare(1.630466);
   fit1039->SetNDF(2);
   fit1039->GetXaxis()->SetLabelFont(42);
   fit1039->GetXaxis()->SetTitleOffset(1);
   fit1039->GetXaxis()->SetTitleFont(42);
   fit1039->GetYaxis()->SetLabelFont(42);
   fit1039->GetYaxis()->SetTitleFont(42);
   fit1039->SetParameter(0,0.0003058137);
   fit1039->SetParError(0,8.511481e-06);
   fit1039->SetParLimits(0,0,0);
   fit1039->SetParameter(1,0.0002717134);
   fit1039->SetParError(1,1.158586e-05);
   fit1039->SetParLimits(1,0,0);
   fit1039->Draw("SAME");
   
   TF1 *fit1040 = new TF1("fit","[0]+[1]*x",0.4888369,1.336416, TF1::EAddToList::kNo);
   fit1040->SetFillColor(19);
   fit1040->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1040->SetLineColor(ci);
   fit1040->SetLineWidth(2);
   fit1040->SetChisquare(6.294744);
   fit1040->SetNDF(2);
   fit1040->GetXaxis()->SetLabelFont(42);
   fit1040->GetXaxis()->SetTitleOffset(1);
   fit1040->GetXaxis()->SetTitleFont(42);
   fit1040->GetYaxis()->SetLabelFont(42);
   fit1040->GetYaxis()->SetTitleFont(42);
   fit1040->SetParameter(0,0.0001997986);
   fit1040->SetParError(0,1.313897e-05);
   fit1040->SetParLimits(0,0,0);
   fit1040->SetParameter(1,0.0002607098);
   fit1040->SetParError(1,1.26803e-05);
   fit1040->SetParLimits(1,0,0);
   fit1040->Draw("SAME");
   
   TF1 *fit1041 = new TF1("fit","[0]+[1]*x",-0.08374266,1.004553, TF1::EAddToList::kDefault);
   fit1041->SetFillColor(19);
   fit1041->SetFillStyle(0);
   fit1041->SetLineWidth(2);
   fit1041->SetLineStyle(2);
   fit1041->GetXaxis()->SetLabelFont(42);
   fit1041->GetXaxis()->SetTitleOffset(1);
   fit1041->GetXaxis()->SetTitleFont(42);
   fit1041->GetYaxis()->SetLabelFont(42);
   fit1041->GetYaxis()->SetTitleFont(42);
   fit1041->SetParameter(0,0.0003058137);
   fit1041->SetParError(0,0);
   fit1041->SetParLimits(0,0,0);
   fit1041->SetParameter(1,0.0002717134);
   fit1041->SetParError(1,0);
   fit1041->SetParLimits(1,0,0);
   fit1041->Draw("SAME");
   
   TF1 *fit1042 = new TF1("fit","[0]+[1]*x",-0.08374266,1.004553, TF1::EAddToList::kDefault);
   fit1042->SetFillColor(19);
   fit1042->SetFillStyle(0);
   fit1042->SetLineWidth(2);
   fit1042->SetLineStyle(2);
   fit1042->GetXaxis()->SetLabelFont(42);
   fit1042->GetXaxis()->SetTitleOffset(1);
   fit1042->GetXaxis()->SetTitleFont(42);
   fit1042->GetYaxis()->SetLabelFont(42);
   fit1042->GetYaxis()->SetTitleFont(42);
   fit1042->SetParameter(0,0.0003058137);
   fit1042->SetParError(0,0);
   fit1042->SetParLimits(0,0,0);
   fit1042->SetParameter(1,0.0002717134);
   fit1042->SetParError(1,0);
   fit1042->SetParLimits(1,0,0);
   fit1042->Draw("SAME");
   
   TF1 *fit1043 = new TF1("fit","[0]+[1]*x",-0.07288766,1.336416, TF1::EAddToList::kDefault);
   fit1043->SetFillColor(19);
   fit1043->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1043->SetLineColor(ci);
   fit1043->SetLineWidth(2);
   fit1043->SetLineStyle(2);
   fit1043->GetXaxis()->SetLabelFont(42);
   fit1043->GetXaxis()->SetTitleOffset(1);
   fit1043->GetXaxis()->SetTitleFont(42);
   fit1043->GetYaxis()->SetLabelFont(42);
   fit1043->GetYaxis()->SetTitleFont(42);
   fit1043->SetParameter(0,0.0001997986);
   fit1043->SetParError(0,0);
   fit1043->SetParLimits(0,0,0);
   fit1043->SetParameter(1,0.0002607098);
   fit1043->SetParError(1,0);
   fit1043->SetParLimits(1,0,0);
   fit1043->Draw("SAME");
   
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
