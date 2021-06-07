void S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:25:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,0.03857813,3550,0.2216767);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1328[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1328[12] = {
   0.1440968,
   0.1449177,
   0.1453375,
   0.1457888,
   0.1475475,
   0.1480774,
   0.1455336,
   0.1453618,
   0.1380704,
   0.1249489,
   0.133531,
   0.1301274};
   Double_t Graph0_fex1328[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1328[12] = {
   0.01788594,
   0.01797383,
   0.01824241,
   0.01864569,
   0.01928944,
   0.02029484,
   0.02178416,
   0.02399324,
   0.02723083,
   0.03219222,
   0.04080715,
   0.06103286};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1328,Graph0_fy1328,Graph0_fex1328,Graph0_fey1328);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01328 = new TH1F("Graph_Graph01328","S18",100,580,3220);
   Graph_Graph01328->SetMinimum(0.05688799);
   Graph_Graph01328->SetMaximum(0.2033669);
   Graph_Graph01328->SetDirectory(0);
   Graph_Graph01328->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01328->SetLineColor(ci);
   Graph_Graph01328->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01328->GetXaxis()->SetRange(1,100);
   Graph_Graph01328->GetXaxis()->CenterTitle(true);
   Graph_Graph01328->GetXaxis()->SetLabelFont(42);
   Graph_Graph01328->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01328->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01328->GetXaxis()->SetTitleFont(42);
   Graph_Graph01328->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01328->GetYaxis()->CenterTitle(true);
   Graph_Graph01328->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01328->GetYaxis()->SetLabelFont(42);
   Graph_Graph01328->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01328->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01328->GetYaxis()->SetTitleFont(42);
   Graph_Graph01328->GetZaxis()->SetLabelFont(42);
   Graph_Graph01328->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01328->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01328);
   
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
