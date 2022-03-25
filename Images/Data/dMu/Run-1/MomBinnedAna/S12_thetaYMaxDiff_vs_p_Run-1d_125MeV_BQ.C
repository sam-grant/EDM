void S12_thetaYMaxDiff_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8389,2.97717,3033.522,244.1548);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1070[22] = {
   367.2236,
   456.6639,
   570.2517,
   695.0627,
   815.9831,
   938.554,
   1062.655,
   1188.287,
   1312.788,
   1435.9,
   1561.968,
   1685.267,
   1810.602,
   1935.128,
   2060.285,
   2185.022,
   2309.141,
   2432.952,
   2559.541,
   2679.196,
   2781.12,
   2886.415};
   Double_t Graph0_fy1070[22] = {
   167.18,
   183.7507,
   182.6459,
   183.0142,
   183.3824,
   182.2777,
   180.4365,
   173.44,
   170.8623,
   164.6023,
   149.8728,
   136.6162,
   118.9408,
   108.9984,
   110.4713,
   79.17112,
   78.80289,
   82.11703,
   67.75575,
   59.65452,
   47.87091,
   22.83074};
   Double_t Graph0_fex1070[22] = {
   0.15529,
   0.07767284,
   0.05215712,
   0.03528341,
   0.02828885,
   0.02549312,
   0.02417555,
   0.02334841,
   0.02364677,
   0.02371021,
   0.02546434,
   0.02672193,
   0.02997394,
   0.03283023,
   0.03742638,
   0.0412261,
   0.04755622,
   0.05709664,
   0.06850077,
   0.07809568,
   0.1560077,
   0.9305664};
   Double_t Graph0_fey1070[22] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1070,Graph0_fy1070,Graph0_fex1070,Graph0_fey1070);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01070 = new TH1F("Graph_Graph01070","S12",100,115.0406,3139.374);
   Graph_Graph01070->SetMinimum(27.09493);
   Graph_Graph01070->SetMaximum(220.037);
   Graph_Graph01070->SetDirectory(0);
   Graph_Graph01070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01070->SetLineColor(ci);
   Graph_Graph01070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01070->GetXaxis()->SetRange(21,88);
   Graph_Graph01070->GetXaxis()->CenterTitle(true);
   Graph_Graph01070->GetXaxis()->SetLabelFont(42);
   Graph_Graph01070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01070->GetXaxis()->SetTitleFont(42);
   Graph_Graph01070->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01070->GetYaxis()->CenterTitle(true);
   Graph_Graph01070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01070->GetYaxis()->SetLabelFont(42);
   Graph_Graph01070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01070->GetYaxis()->SetTitleFont(42);
   Graph_Graph01070->GetZaxis()->SetLabelFont(42);
   Graph_Graph01070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01070);
   
   gre->Draw("alp");
   
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
