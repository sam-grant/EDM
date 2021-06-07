void S12_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:25:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.8034826,3550,-0.2067875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1221[12] = {
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
   Double_t Graph0_fy1221[12] = {
   -0.3188215,
   -0.320372,
   -0.3233753,
   -0.3280048,
   -0.3355759,
   -0.350173,
   -0.367605,
   -0.3885471,
   -0.4178487,
   -0.4615399,
   -0.5452506,
   -0.6608705};
   Double_t Graph0_fex1221[12] = {
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
   Double_t Graph0_fey1221[12] = {
   0.01258473,
   0.01264423,
   0.01282486,
   0.01310848,
   0.01357697,
   0.01430347,
   0.01538209,
   0.01694823,
   0.01925002,
   0.02277806,
   0.02889877,
   0.04316291};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1221,Graph0_fy1221,Graph0_fex1221,Graph0_fey1221);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01221 = new TH1F("Graph_Graph01221","S12",100,580,3220);
   Graph_Graph01221->SetMinimum(-0.7438131);
   Graph_Graph01221->SetMaximum(-0.2664571);
   Graph_Graph01221->SetDirectory(0);
   Graph_Graph01221->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01221->SetLineColor(ci);
   Graph_Graph01221->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01221->GetXaxis()->SetRange(1,100);
   Graph_Graph01221->GetXaxis()->CenterTitle(true);
   Graph_Graph01221->GetXaxis()->SetLabelFont(42);
   Graph_Graph01221->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01221->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01221->GetXaxis()->SetTitleFont(42);
   Graph_Graph01221->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01221->GetYaxis()->CenterTitle(true);
   Graph_Graph01221->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01221->GetYaxis()->SetLabelFont(42);
   Graph_Graph01221->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01221->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01221->GetYaxis()->SetTitleFont(42);
   Graph_Graph01221->GetZaxis()->SetLabelFont(42);
   Graph_Graph01221->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01221->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01221);
   
   gre->Draw("ap");
   
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
