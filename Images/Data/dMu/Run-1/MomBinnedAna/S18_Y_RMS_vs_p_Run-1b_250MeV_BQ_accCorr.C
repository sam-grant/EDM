void S18_Y_RMS_vs_p_Run-1b_250MeV_BQ_accCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 12:01:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(470.7315,9.232494,3017.857,17.28304);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1077[11] = {
   455.7432,
   653.8266,
   883.6284,
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264,
   2607.239,
   2781.455};
   Double_t Graph0_fy1077[11] = {
   13.63252,
   12.88995,
   12.78507,
   12.73055,
   12.71587,
   12.72875,
   12.67299,
   12.60795,
   12.5464,
   12.72813,
   13.47925};
   Double_t Graph0_fex1077[11] = {
   0.1316061,
   0.09315749,
   0.06347119,
   0.05779539,
   0.05748647,
   0.06386167,
   0.07853738,
   0.09949788,
   0.1316717,
   0.1793381,
   0.2983409};
   Double_t Graph0_fey1077[11] = {
   0.04007243,
   0.0124413,
   0.00808938,
   0.007211525,
   0.007254627,
   0.008081664,
   0.009832974,
   0.01237561,
   0.01647931,
   0.02385035,
   0.1103079};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1077,Graph0_fy1077,Graph0_fex1077,Graph0_fey1077);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01077 = new TH1F("Graph_Graph01077","S18",100,222.9975,3014.367);
   Graph_Graph01077->SetMinimum(10.03755);
   Graph_Graph01077->SetMaximum(16.47799);
   Graph_Graph01077->SetDirectory(0);
   Graph_Graph01077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01077->SetLineColor(ci);
   Graph_Graph01077->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01077->GetXaxis()->SetRange(19,91);
   Graph_Graph01077->GetXaxis()->CenterTitle(true);
   Graph_Graph01077->GetXaxis()->SetLabelFont(42);
   Graph_Graph01077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01077->GetXaxis()->SetTitleFont(42);
   Graph_Graph01077->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01077->GetYaxis()->CenterTitle(true);
   Graph_Graph01077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01077->GetYaxis()->SetLabelFont(42);
   Graph_Graph01077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01077->GetYaxis()->SetTitleFont(42);
   Graph_Graph01077->GetZaxis()->SetLabelFont(42);
   Graph_Graph01077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01077);
   
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
