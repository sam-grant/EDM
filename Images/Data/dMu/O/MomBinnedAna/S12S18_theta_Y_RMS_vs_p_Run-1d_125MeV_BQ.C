void S12S18_theta_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8227,-3.282442,2722.442,43.39868);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1036[22] = {
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
   Double_t Graph0_fy1036[22] = {
   35.12729,
   31.3182,
   26.63148,
   23.34507,
   20.37165,
   18.73003,
   17.29926,
   16.11219,
   15.08109,
   14.07,
   13.17015,
   12.03818,
   11.15166,
   10.2121,
   9.390173,
   8.579354,
   7.778958,
   6.945254,
   6.175217,
   5.473188,
   4.963058,
   4.822905};
   Double_t Graph0_fex1036[22] = {
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
   Double_t Graph0_fey1036[22] = {
   0.4912067,
   0.04409361,
   0.02141793,
   0.01299059,
   0.009021903,
   0.00743255,
   0.006550441,
   0.0059259,
   0.005591703,
   0.005302293,
   0.005312226,
   0.005152884,
   0.005365906,
   0.005417663,
   0.005677753,
   0.005764765,
   0.006050171,
   0.00652881,
   0.006906564,
   0.007458805,
   0.01851243,
   0.3251602};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","S12S18",100,115.1707,3138.094);
   Graph_Graph01036->SetMinimum(1.38567);
   Graph_Graph01036->SetMaximum(38.73057);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01036->GetXaxis()->SetRange(22,79);
   Graph_Graph01036->GetXaxis()->CenterTitle(true);
   Graph_Graph01036->GetXaxis()->SetLabelFont(42);
   Graph_Graph01036->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01036->GetXaxis()->SetTitleFont(42);
   Graph_Graph01036->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01036->GetYaxis()->CenterTitle(true);
   Graph_Graph01036->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01036->GetYaxis()->SetLabelFont(42);
   Graph_Graph01036->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01036->GetYaxis()->SetTitleFont(42);
   Graph_Graph01036->GetZaxis()->SetLabelFont(42);
   Graph_Graph01036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01036);
   
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
