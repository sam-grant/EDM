void S12S18_Ag2_vs_DS_unblinded_750-2500MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 14:12:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-166.8675,4.75,388.4951);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1021[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1021[4] = {
   190.4643,
   15.61277,
   67.27696,
   -4.773594};
   Double_t _fex1021[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1021[4] = {
   105.4704,
   89.91985,
   74.45978,
   54.33607};
   TGraphErrors *gre = new TGraphErrors(4,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","S12S18",100,0.7,4.3);
   Graph_Graph1021->SetMinimum(-111.3313);
   Graph_Graph1021->SetMaximum(332.9589);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1021->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1021->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1021->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1021->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1021->GetXaxis()->CenterTitle(true);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
   Graph_Graph1021->GetYaxis()->CenterTitle(true);
   Graph_Graph1021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   
   TF1 *pol01022 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01022->SetFillColor(19);
   pol01022->SetFillStyle(0);
   pol01022->SetLineColor(2);
   pol01022->SetLineWidth(2);
   pol01022->SetChisquare(2.921849);
   pol01022->SetNDF(3);
   pol01022->GetXaxis()->SetLabelFont(42);
   pol01022->GetXaxis()->SetTitleOffset(1);
   pol01022->GetXaxis()->SetTitleFont(42);
   pol01022->GetYaxis()->SetLabelFont(42);
   pol01022->GetYaxis()->SetTitleFont(42);
   pol01022->SetParameter(0,40.3613);
   pol01022->SetParError(0,36.94476);
   pol01022->SetParLimits(0,0,0);
   pol01022->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01022);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
