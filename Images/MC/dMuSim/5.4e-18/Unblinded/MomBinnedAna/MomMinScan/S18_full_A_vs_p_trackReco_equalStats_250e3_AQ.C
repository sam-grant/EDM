void S18_full_A_vs_p_trackReco_equalStats_250e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 01:13:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(2080,-0.1445526,2920,0.202022);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1154[4] = {
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1154[4] = {
   0.1070043,
   0.1126408,
   0.08942889,
   -0.02513215};
   Double_t Graph0_fex1154[4] = {
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1154[4] = {
   0.02716882,
   0.03161876,
   0.03860063,
   0.06165802};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1154,Graph0_fy1154,Graph0_fex1154,Graph0_fey1154);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01154 = new TH1F("Graph_Graph01154","S18",100,2020,2980);
   Graph_Graph01154->SetMinimum(-0.1098951);
   Graph_Graph01154->SetMaximum(0.1673645);
   Graph_Graph01154->SetDirectory(0);
   Graph_Graph01154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01154->SetLineColor(ci);
   Graph_Graph01154->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01154->GetXaxis()->SetRange(16,85);
   Graph_Graph01154->GetXaxis()->CenterTitle(true);
   Graph_Graph01154->GetXaxis()->SetLabelFont(42);
   Graph_Graph01154->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01154->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01154->GetXaxis()->SetTitleFont(42);
   Graph_Graph01154->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01154->GetYaxis()->CenterTitle(true);
   Graph_Graph01154->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01154->GetYaxis()->SetLabelFont(42);
   Graph_Graph01154->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01154->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01154->GetYaxis()->SetTitleFont(42);
   Graph_Graph01154->GetZaxis()->SetLabelFont(42);
   Graph_Graph01154->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01154->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01154);
   
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
