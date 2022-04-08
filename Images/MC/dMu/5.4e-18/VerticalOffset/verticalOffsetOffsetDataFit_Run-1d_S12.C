void verticalOffsetOffsetDataFit_Run-1d_S12()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:18:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.299,-0.61875,2978.394,0.06875001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1025[7] = {
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644,
   2608.212};
   Double_t _fy1025[7] = {
   -0.6163227,
   -0.6749196,
   -0.3063854,
   -0.1170644,
   -0.07543333,
   -0.01417044,
   0.1573687};
   Double_t _fex1025[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1025[7] = {
   0.007833952,
   0.00678342,
   0.00649775,
   0.006644034,
   0.007061917,
   0.007862949,
   0.009373177};
   TGraphErrors *gre = new TGraphErrors(7,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","S12",100,979.4085,2756.285);
   Graph_Graph1025->SetMinimum(-0.55);
   Graph_Graph1025->SetMaximum(0);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1025->GetXaxis()->CenterTitle(true);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1025->GetYaxis()->CenterTitle(true);
   Graph_Graph1025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1025->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   
   TF1 *fit1026 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1026->SetFillColor(19);
   fit1026->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1026->SetLineColor(ci);
   fit1026->SetLineWidth(2);
   fit1026->SetChisquare(1073.23);
   fit1026->SetNDF(5);
   fit1026->GetXaxis()->SetLabelFont(42);
   fit1026->GetXaxis()->SetTitleOffset(1);
   fit1026->GetXaxis()->SetTitleFont(42);
   fit1026->GetYaxis()->SetLabelFont(42);
   fit1026->GetYaxis()->SetTitleFont(42);
   fit1026->SetParameter(0,-1.308422);
   fit1026->SetParError(0,0.01143304);
   fit1026->SetParLimits(0,0,0);
   fit1026->SetParameter(1,0.0005774157);
   fit1026->SetParError(1,6.122824e-06);
   fit1026->SetParLimits(1,0,0);
   fit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1026);
   gre->Draw("ap");
   
   Double_t _fx1027[7] = {
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644,
   2608.212};
   Double_t _fy1027[7] = {
   -0.6163227,
   -0.6749196,
   -0.3063854,
   -0.1170644,
   -0.07543333,
   -0.01417044,
   0.1573687};
   Double_t _fex1027[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1027[7] = {
   0.007833952,
   0.00678342,
   0.00649775,
   0.006644034,
   0.007061917,
   0.007862949,
   0.009373177};
   gre = new TGraphErrors(7,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10251027 = new TH1F("Graph_Graph_Graph10251027","S12",100,979.4085,2756.285);
   Graph_Graph_Graph10251027->SetMinimum(-0.55);
   Graph_Graph_Graph10251027->SetMaximum(0);
   Graph_Graph_Graph10251027->SetDirectory(0);
   Graph_Graph_Graph10251027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10251027->SetLineColor(ci);
   Graph_Graph_Graph10251027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph10251027->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10251027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10251027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10251027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10251027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10251027->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_Graph10251027->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10251027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10251027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10251027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10251027->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph_Graph10251027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10251027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10251027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10251027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10251027);
   
   
   TF1 *fit1028 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1028->SetFillColor(19);
   fit1028->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1028->SetLineColor(ci);
   fit1028->SetLineWidth(2);
   fit1028->SetChisquare(1073.23);
   fit1028->SetNDF(5);
   fit1028->GetXaxis()->SetLabelFont(42);
   fit1028->GetXaxis()->SetTitleOffset(1);
   fit1028->GetXaxis()->SetTitleFont(42);
   fit1028->GetYaxis()->SetLabelFont(42);
   fit1028->GetYaxis()->SetTitleFont(42);
   fit1028->SetParameter(0,-1.308422);
   fit1028->SetParError(0,0.01143304);
   fit1028->SetParLimits(0,0,0);
   fit1028->SetParameter(1,0.0005774157);
   fit1028->SetParError(1,6.122824e-06);
   fit1028->SetParLimits(1,0,0);
   fit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1028);
   gre->Draw("p ");
   
   TF1 *fit1029 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1029->SetFillColor(19);
   fit1029->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1029->SetLineColor(ci);
   fit1029->SetLineWidth(2);
   fit1029->SetChisquare(1073.23);
   fit1029->SetNDF(5);
   fit1029->GetXaxis()->SetLabelFont(42);
   fit1029->GetXaxis()->SetTitleOffset(1);
   fit1029->GetXaxis()->SetTitleFont(42);
   fit1029->GetYaxis()->SetLabelFont(42);
   fit1029->GetYaxis()->SetTitleFont(42);
   fit1029->SetParameter(0,-1.308422);
   fit1029->SetParError(0,0.01143304);
   fit1029->SetParLimits(0,0,0);
   fit1029->SetParameter(1,0.0005774157);
   fit1029->SetParError(1,6.122824e-06);
   fit1029->SetParLimits(1,0,0);
   fit1029->Draw("SAME");
   
   TF1 *fit1030 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1030->SetFillColor(19);
   fit1030->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1030->SetLineColor(ci);
   fit1030->SetLineWidth(2);
   fit1030->SetChisquare(1073.23);
   fit1030->SetNDF(5);
   fit1030->GetXaxis()->SetLabelFont(42);
   fit1030->GetXaxis()->SetTitleOffset(1);
   fit1030->GetXaxis()->SetTitleFont(42);
   fit1030->GetYaxis()->SetLabelFont(42);
   fit1030->GetYaxis()->SetTitleFont(42);
   fit1030->SetParameter(0,-1.308422);
   fit1030->SetParError(0,0.01143304);
   fit1030->SetParLimits(0,0,0);
   fit1030->SetParameter(1,0.0005774157);
   fit1030->SetParError(1,6.122824e-06);
   fit1030->SetParLimits(1,0,0);
   fit1030->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.75,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","0 mm","lpf");
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
   entry=leg->AddEntry("","#plus1 mm","lpf");
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
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
