void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.07752876,3550,0.8847803);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1327[12] = {
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
   Double_t Graph0_fy1327[12] = {
   0.08834958,
   0.08942849,
   0.091509,
   0.09575128,
   0.1009177,
   0.1164297,
   0.1413542,
   0.1894991,
   0.2741582,
   0.4573968,
   0.7093785,
   0.5899622};
   Double_t Graph0_fex1327[12] = {
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
   Double_t Graph0_fey1327[12] = {
   0.00549349,
   0.005515904,
   0.005602471,
   0.005740295,
   0.005982614,
   0.006349928,
   0.006905946,
   0.007761967,
   0.009077149,
   0.01120932,
   0.01501701,
   0.02414818};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1327,Graph0_fy1327,Graph0_fex1327,Graph0_fey1327);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01327 = new TH1F("Graph_Graph01327","S18",100,580,3220);
   Graph_Graph01327->SetMinimum(0.01870216);
   Graph_Graph01327->SetMaximum(0.7885494);
   Graph_Graph01327->SetDirectory(0);
   Graph_Graph01327->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01327->SetLineColor(ci);
   Graph_Graph01327->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01327->GetXaxis()->SetRange(1,100);
   Graph_Graph01327->GetXaxis()->CenterTitle(true);
   Graph_Graph01327->GetXaxis()->SetLabelFont(42);
   Graph_Graph01327->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01327->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01327->GetXaxis()->SetTitleFont(42);
   Graph_Graph01327->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01327->GetYaxis()->CenterTitle(true);
   Graph_Graph01327->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01327->GetYaxis()->SetLabelFont(42);
   Graph_Graph01327->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01327->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01327->GetYaxis()->SetTitleFont(42);
   Graph_Graph01327->GetZaxis()->SetLabelFont(42);
   Graph_Graph01327->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01327->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01327);
   
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
