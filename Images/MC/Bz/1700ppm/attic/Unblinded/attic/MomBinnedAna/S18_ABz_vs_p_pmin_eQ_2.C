void S18_ABz_vs_p_pmin_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 22:57:11 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,0.09181684,2600,0.1759239);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1248[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1248[9] = {
   0.1441202,
   0.1427154,
   0.1395042,
   0.1347623,
   0.1308674,
   0.1291591,
   0.1265126,
   0.1238429,
   0.1365712};
   Double_t Graph0_fex1248[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1248[9] = {
   0.007979725,
   0.01125121,
   0.01133618,
   0.0116422,
   0.01223146,
   0.01323725,
   0.01493397,
   0.01800827,
   0.02533482};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1248,Graph0_fy1248,Graph0_fex1248,Graph0_fey1248);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01248 = new TH1F("Graph_Graph01248","S18",100,440,2360);
   Graph_Graph01248->SetMinimum(0.1002275);
   Graph_Graph01248->SetMaximum(0.1675132);
   Graph_Graph01248->SetDirectory(0);
   Graph_Graph01248->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01248->SetLineColor(ci);
   Graph_Graph01248->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01248->GetXaxis()->CenterTitle(true);
   Graph_Graph01248->GetXaxis()->SetLabelFont(42);
   Graph_Graph01248->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01248->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01248->GetXaxis()->SetTitleFont(42);
   Graph_Graph01248->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01248->GetYaxis()->CenterTitle(true);
   Graph_Graph01248->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01248->GetYaxis()->SetLabelFont(42);
   Graph_Graph01248->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01248->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01248->GetYaxis()->SetTitleFont(42);
   Graph_Graph01248->GetZaxis()->SetLabelFont(42);
   Graph_Graph01248->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01248->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01248);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
