void S12S18_full_A_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:29 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,0.1158168,3500,0.3913811);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1202[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t Graph0_fy1202[5] = {
   0.1937721,
   0.1923149,
   0.1928307,
   0.1877018,
   0.3045714};
   Double_t Graph0_fex1202[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1202[5] = {
   0.01867564,
   0.01946985,
   0.02126145,
   0.02595758,
   0.04088236};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1202,Graph0_fy1202,Graph0_fex1202,Graph0_fey1202);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01202 = new TH1F("Graph_Graph01202","S12S18",100,800,3200);
   Graph_Graph01202->SetMinimum(0.1433732);
   Graph_Graph01202->SetMaximum(0.3638247);
   Graph_Graph01202->SetDirectory(0);
   Graph_Graph01202->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01202->SetLineColor(ci);
   Graph_Graph01202->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01202->GetXaxis()->SetRange(1,100);
   Graph_Graph01202->GetXaxis()->CenterTitle(true);
   Graph_Graph01202->GetXaxis()->SetLabelFont(42);
   Graph_Graph01202->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01202->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01202->GetXaxis()->SetTitleFont(42);
   Graph_Graph01202->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01202->GetYaxis()->CenterTitle(true);
   Graph_Graph01202->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01202->GetYaxis()->SetLabelFont(42);
   Graph_Graph01202->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01202->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01202->GetYaxis()->SetTitleFont(42);
   Graph_Graph01202->GetZaxis()->SetLabelFont(42);
   Graph_Graph01202->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01202->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01202);
   
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
