void S18_theta_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.5287,3.143695,2721.883,27.90246);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1032[22] = {
   367.0177,
   457.2363,
   570.0312,
   694.4722,
   815.6727,
   938.5327,
   1062.881,
   1188.195,
   1312.611,
   1435.71,
   1561.996,
   1685.037,
   1810.509,
   1934.917,
   2060.265,
   2184.762,
   2308.999,
   2433.429,
   2559.667,
   2677.99,
   2781.676,
   2884.375};
   Double_t Graph0_fy1032[22] = {
   35.34208,
   30.98741,
   26.48474,
   23.25021,
   20.28738,
   18.64186,
   17.23438,
   16.02767,
   14.99685,
   14.01,
   13.09521,
   11.97067,
   11.07321,
   10.1723,
   9.339258,
   8.564197,
   7.727817,
   6.88354,
   6.12594,
   5.441583,
   4.956643,
   4.766392};
   Double_t Graph0_fex1032[22] = {
   0.2108591,
   0.1060616,
   0.07018618,
   0.04922973,
   0.03989433,
   0.03617714,
   0.03425647,
   0.03330809,
   0.0340638,
   0.03436938,
   0.03710766,
   0.03930702,
   0.04469014,
   0.04907403,
   0.05659448,
   0.0626717,
   0.0728264,
   0.08818203,
   0.104193,
   0.1211257,
   0.258964,
   1.230174};
   Double_t Graph0_fey1032[22] = {
   0.825263,
   0.07672877,
   0.03716302,
   0.02284633,
   0.01599112,
   0.01321331,
   0.01162904,
   0.01051479,
   0.009962241,
   0.009496995,
   0.009516539,
   0.009273524,
   0.009692594,
   0.00982874,
   0.01032366,
   0.01054736,
   0.01105926,
   0.01192274,
   0.01254194,
   0.01377364,
   0.03532179,
   0.5396876};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","S18",100,114.9269,3137.485);
   Graph_Graph01032->SetMinimum(5.619571);
   Graph_Graph01032->SetMaximum(25.42658);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01032->GetXaxis()->SetRange(22,79);
   Graph_Graph01032->GetXaxis()->CenterTitle(true);
   Graph_Graph01032->GetXaxis()->SetLabelFont(42);
   Graph_Graph01032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetXaxis()->SetTitleFont(42);
   Graph_Graph01032->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01032->GetYaxis()->CenterTitle(true);
   Graph_Graph01032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01032->GetYaxis()->SetLabelFont(42);
   Graph_Graph01032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01032->GetYaxis()->SetTitleFont(42);
   Graph_Graph01032->GetZaxis()->SetLabelFont(42);
   Graph_Graph01032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01032);
   
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
