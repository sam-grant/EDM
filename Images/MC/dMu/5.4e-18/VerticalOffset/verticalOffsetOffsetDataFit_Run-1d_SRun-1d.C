void verticalOffsetOffsetDataFit_Run-1d_SRun-1d()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:19:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.299,-0.61875,2978.394,0.06875001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1013[7] = {
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644,
   2608.212};
   Double_t _fy1013[7] = {
   -0.6163227,
   -0.6749196,
   -0.3063854,
   -0.1170644,
   -0.07543333,
   -0.01417044,
   0.1573687};
   Double_t _fex1013[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[7] = {
   0.007833952,
   0.00678342,
   0.00649775,
   0.006644034,
   0.007061917,
   0.007862949,
   0.009373177};
   TGraphErrors *gre = new TGraphErrors(7,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("SRun-1d");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","SRun-1d",100,979.4085,2756.285);
   Graph_Graph1013->SetMinimum(-0.55);
   Graph_Graph1013->SetMaximum(0);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1013->GetXaxis()->CenterTitle(true);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1013->GetYaxis()->CenterTitle(true);
   Graph_Graph1013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   
   TF1 *fit1014 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1014->SetFillColor(19);
   fit1014->SetFillStyle(0);
   fit1014->SetLineWidth(2);
   fit1014->SetChisquare(1073.23);
   fit1014->SetNDF(5);
   fit1014->GetXaxis()->SetLabelFont(42);
   fit1014->GetXaxis()->SetTitleOffset(1);
   fit1014->GetXaxis()->SetTitleFont(42);
   fit1014->GetYaxis()->SetLabelFont(42);
   fit1014->GetYaxis()->SetTitleFont(42);
   fit1014->SetParameter(0,-1.308422);
   fit1014->SetParError(0,0.01143304);
   fit1014->SetParLimits(0,0,0);
   fit1014->SetParameter(1,0.0005774157);
   fit1014->SetParError(1,6.122824e-06);
   fit1014->SetParLimits(1,0,0);
   fit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1014);
   gre->Draw("ap");
   
   Double_t _fx1015[7] = {
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196,
   2606.768};
   Double_t _fy1015[7] = {
   -0.7183937,
   -0.6358225,
   -0.3506347,
   -0.181515,
   -0.09963287,
   -0.05288394,
   0.01548025};
   Double_t _fex1015[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[7] = {
   0.00808423,
   0.007128531,
   0.006906955,
   0.007225717,
   0.007816829,
   0.00881887,
   0.01043666};
   gre = new TGraphErrors(7,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,979.2867,2754.721);
   Graph_Graph1015->SetMinimum(-0.8017174);
   Graph_Graph1015->SetMaximum(0.1011564);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   
   TF1 *fit1016 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1016->SetFillColor(19);
   fit1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1016->SetLineColor(ci);
   fit1016->SetLineWidth(2);
   fit1016->SetChisquare(569.2721);
   fit1016->SetNDF(4);
   fit1016->GetXaxis()->SetLabelFont(42);
   fit1016->GetXaxis()->SetTitleOffset(1);
   fit1016->GetXaxis()->SetTitleFont(42);
   fit1016->GetYaxis()->SetLabelFont(42);
   fit1016->GetYaxis()->SetTitleFont(42);
   fit1016->SetParameter(0,-1.250085);
   fit1016->SetParError(0,0.01566531);
   fit1016->SetParLimits(0,0,0);
   fit1016->SetParameter(1,0.000523953);
   fit1016->SetParError(1,8.11422e-06);
   fit1016->SetParLimits(1,0,0);
   fit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1016);
   gre->Draw("p ");
   
   TF1 *fit1017 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1017->SetFillColor(19);
   fit1017->SetFillStyle(0);
   fit1017->SetLineWidth(2);
   fit1017->SetChisquare(1073.23);
   fit1017->SetNDF(5);
   fit1017->GetXaxis()->SetLabelFont(42);
   fit1017->GetXaxis()->SetTitleOffset(1);
   fit1017->GetXaxis()->SetTitleFont(42);
   fit1017->GetYaxis()->SetLabelFont(42);
   fit1017->GetYaxis()->SetTitleFont(42);
   fit1017->SetParameter(0,-1.308422);
   fit1017->SetParError(0,0.01143304);
   fit1017->SetParLimits(0,0,0);
   fit1017->SetParameter(1,0.0005774157);
   fit1017->SetParError(1,6.122824e-06);
   fit1017->SetParLimits(1,0,0);
   fit1017->Draw("SAME");
   
   TF1 *fit1018 = new TF1("fit","[0]+[1]*x",1127.482,2608.212, TF1::EAddToList::kNo);
   fit1018->SetFillColor(19);
   fit1018->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1018->SetLineColor(ci);
   fit1018->SetLineWidth(2);
   fit1018->SetChisquare(569.2721);
   fit1018->SetNDF(4);
   fit1018->GetXaxis()->SetLabelFont(42);
   fit1018->GetXaxis()->SetTitleOffset(1);
   fit1018->GetXaxis()->SetTitleFont(42);
   fit1018->GetYaxis()->SetLabelFont(42);
   fit1018->GetYaxis()->SetTitleFont(42);
   fit1018->SetParameter(0,-1.250085);
   fit1018->SetParError(0,0.01566531);
   fit1018->SetParLimits(0,0,0);
   fit1018->SetParameter(1,0.000523953);
   fit1018->SetParError(1,8.11422e-06);
   fit1018->SetParLimits(1,0,0);
   fit1018->Draw("SAME");
   
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
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4158794,0.94,0.5841206,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("SRun-1d");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
