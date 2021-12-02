void S18_Ag2_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8077,-0.04632602,2722.058,0.03552338);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1030[22] = {
   367.2502,
   457.4177,
   569.9565,
   694.5073,
   815.7095,
   938.4817,
   1062.811,
   1188.155,
   1312.578,
   1435.627,
   1561.976,
   1684.876,
   1810.455,
   1934.884,
   2060.236,
   2184.764,
   2309.028,
   2433.194,
   2559.829,
   2677.851,
   2781.314,
   2884.766};
   Double_t Graph0_fy1030[22] = {
   1.214912,
   0.160257,
   0.0745076,
   -0.04547287,
   0.02279684,
   0.02500572,
   0.0007435751,
   0.006958829,
   -0.01022635,
   -0.008856355,
   0.01101872,
   0.003189169,
   -0.02300449,
   -0.03271093,
   0.01939241,
   0.01832448,
   0.0003819231,
   -0.005003342,
   0.0007688677,
   -0.001305651,
   0.07804087,
   0.5428017};
   Double_t Graph0_fex1030[22] = {
   0.1565263,
   0.07803887,
   0.0516356,
   0.03619803,
   0.02937948,
   0.02663994,
   0.02525597,
   0.02451355,
   0.02509404,
   0.02530411,
   0.02731337,
   0.02899487,
   0.03304421,
   0.03623749,
   0.04172191,
   0.04628837,
   0.05391883,
   0.06547986,
   0.07727017,
   0.08903053,
   0.1899021,
   1.006105};
   Double_t Graph0_fey1030[22] = {
   1.238566,
   0.112531,
   0.05469609,
   0.03366908,
   0.02356154,
   0.0194736,
   0.01712982,
   0.01547886,
   0.0146945,
   0.01398997,
   0.01403431,
   0.01368898,
   0.01439503,
   0.0146316,
   0.01547776,
   0.01592769,
   0.01688414,
   0.01856142,
   0.01980108,
   0.02228704,
   0.0589062,
   0.3625035};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01030 = new TH1F("Graph_Graph01030","S18",100,115.2258,3137.64);
   Graph_Graph01030->SetMinimum(-0.03814108);
   Graph_Graph01030->SetMaximum(0.02733843);
   Graph_Graph01030->SetDirectory(0);
   Graph_Graph01030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01030->SetLineColor(ci);
   Graph_Graph01030->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01030->GetXaxis()->SetRange(22,79);
   Graph_Graph01030->GetXaxis()->CenterTitle(true);
   Graph_Graph01030->GetXaxis()->SetLabelFont(42);
   Graph_Graph01030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01030->GetXaxis()->SetTitleFont(42);
   Graph_Graph01030->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01030->GetYaxis()->CenterTitle(true);
   Graph_Graph01030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01030->GetYaxis()->SetLabelFont(42);
   Graph_Graph01030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01030->GetYaxis()->SetTitleFont(42);
   Graph_Graph01030->GetZaxis()->SetLabelFont(42);
   Graph_Graph01030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01030);
   
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
