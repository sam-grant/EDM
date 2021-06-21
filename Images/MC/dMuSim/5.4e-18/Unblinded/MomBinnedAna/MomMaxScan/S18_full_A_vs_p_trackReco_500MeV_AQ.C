void S18_full_A_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.3949683,3500,0.6054863);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1154[5] = {
   3000,
   2500,
   2000,
   1500,
   1000};
   Double_t Graph0_fy1154[5] = {
   0.208219,
   0.1900859,
   0.139417,
   -0.09403844,
   0.1708095};
   Double_t Graph0_fex1154[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1154[5] = {
   0.06156447,
   0.06888386,
   0.08790811,
   0.1341874,
   0.2679344};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1154,Graph0_fy1154,Graph0_fex1154,Graph0_fey1154);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01154 = new TH1F("Graph_Graph01154","S18",100,800,3200);
   Graph_Graph01154->SetMinimum(-0.2949228);
   Graph_Graph01154->SetMaximum(0.5054408);
   Graph_Graph01154->SetDirectory(0);
   Graph_Graph01154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01154->SetLineColor(ci);
   Graph_Graph01154->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01154->GetXaxis()->SetRange(1,100);
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
