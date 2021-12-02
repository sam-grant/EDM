void S12S18_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 18:01:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8227,9.990591,2722.442,23.58751);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[22] = {
   367.2033,
   457.0147,
   570.1003,
   694.7422,
   815.8159,
   938.5085,
   1062.735,
   1188.193,
   1312.674,
   1435.759,
   1561.971,
   1685.095,
   1810.525,
   1934.999,
   2060.258,
   2184.864,
   2309.08,
   2433.07,
   2559.684,
   2678.57,
   2781.109,
   2885.371};
   Double_t Graph0_fy1037[22] = {
   13.86538,
   13.32011,
   12.74659,
   12.48399,
   12.45709,
   12.43363,
   12.41798,
   12.40589,
   12.39702,
   12.42271,
   12.41614,
   12.41937,
   12.39746,
   12.35953,
   12.32127,
   12.29744,
   12.26628,
   12.27066,
   12.33549,
   12.51178,
   12.98354,
   19.97466};
   Double_t Graph0_fex1037[22] = {
   0.1223124,
   0.06036459,
   0.04024824,
   0.0277788,
   0.02243236,
   0.02027873,
   0.01924623,
   0.01865073,
   0.01899693,
   0.01911444,
   0.02059145,
   0.0217368,
   0.02457288,
   0.02694885,
   0.0308822,
   0.03415244,
   0.03960077,
   0.04777372,
   0.05698453,
   0.06530988,
   0.133844,
   0.8128393};
   Double_t Graph0_fey1037[22] = {
   0.1938883,
   0.01875744,
   0.01025214,
   0.0069471,
   0.005517046,
   0.004934149,
   0.004702301,
   0.004562992,
   0.004596741,
   0.004681809,
   0.005008326,
   0.005316143,
   0.005965397,
   0.006556945,
   0.007450088,
   0.008263111,
   0.009540383,
   0.01153504,
   0.01379676,
   0.01705175,
   0.04844604,
   1.346692};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","S12S18",100,115.1707,3138.094);
   Graph_Graph01037->SetMinimum(11.35028);
   Graph_Graph01037->SetMaximum(22.22782);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01037->GetXaxis()->SetRange(22,79);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   gre->Draw("alp");
   
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
