void S18_c_vs_p_Run-1c_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.5063,-0.009367738,2705.502,0.03369769);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1072[11] = {
   456.3694,
   653.7602,
   883.7216,
   1127.519,
   1372.944,
   1619.697,
   1866.663,
   2115.878,
   2359.713,
   2606.446,
   2783.051};
   Double_t Graph0_fy1072[11] = {
   0.01204822,
   0.04449505,
   -0.008200499,
   0.01986598,
   0.02454879,
   0.0004934307,
   0.01647141,
   -0.002641489,
   -0.00436315,
   0.01075728,
   -0.166776};
   Double_t Graph0_fex1072[11] = {
   0.1715233,
   0.1204394,
   0.08157642,
   0.07389347,
   0.07350177,
   0.08175141,
   0.1004464,
   0.127173,
   0.1676145,
   0.2315704,
   0.4154109};
   Double_t Graph0_fey1072[11] = {
   0.1685036,
   0.04317917,
   0.02235558,
   0.01703848,
   0.01492822,
   0.014439,
   0.01503298,
   0.01616888,
   0.01805465,
   0.02150381,
   0.08313373};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1072,Graph0_fy1072,Graph0_fex1072,Graph0_fey1072);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01072 = new TH1F("Graph_Graph01072","S18",100,223.4711,3016.193);
   Graph_Graph01072->SetMinimum(-0.005061194);
   Graph_Graph01072->SetMaximum(0.02939115);
   Graph_Graph01072->SetDirectory(0);
   Graph_Graph01072->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01072->SetLineColor(ci);
   Graph_Graph01072->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01072->GetXaxis()->SetRange(28,82);
   Graph_Graph01072->GetXaxis()->CenterTitle(true);
   Graph_Graph01072->GetXaxis()->SetLabelFont(42);
   Graph_Graph01072->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01072->GetXaxis()->SetTitleFont(42);
   Graph_Graph01072->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01072->GetYaxis()->CenterTitle(true);
   Graph_Graph01072->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01072->GetYaxis()->SetLabelFont(42);
   Graph_Graph01072->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01072->GetYaxis()->SetTitleFont(42);
   Graph_Graph01072->GetZaxis()->SetLabelFont(42);
   Graph_Graph01072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01072);
   
   gre->Draw("alp");
   
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
