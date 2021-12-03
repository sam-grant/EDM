void S18_N_vs_p_Run-1a_125MeV_BQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:46:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(491.3947,-397.8626,3023.315,10998.54);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[22] = {
   363.6742,
   456.9233,
   570.967,
   695.2781,
   815.5259,
   938.5837,
   1061.906,
   1188.014,
   1312.777,
   1436.197,
   1562.156,
   1685.12,
   1809.254,
   1935.716,
   2061.228,
   2185.339,
   2308.766,
   2432.082,
   2557.212,
   2678.382,
   2781.661,
   2879.577};
   Double_t Graph0_fy1035[22] = {
   6,
   629,
   1794,
   3645,
   5601,
   7181,
   7661,
   8073,
   8219,
   7929,
   6859,
   5910,
   4773,
   3813,
   2995,
   2475,
   1843,
   1286,
   870,
   596,
   81,
   2};
   Double_t Graph0_fex1035[22] = {
   2.024653,
   1.162748,
   0.839956,
   0.582615,
   0.4780578,
   0.4268186,
   0.4103958,
   0.3961116,
   0.3958377,
   0.4013615,
   0.4393997,
   0.4716689,
   0.5278869,
   0.5765577,
   0.6514839,
   0.7132642,
   0.8283014,
   1.013706,
   1.241928,
   1.421088,
   3.295854,
   1.395883};
   Double_t Graph0_fey1035[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","S18",100,109.7171,3132.906);
   Graph_Graph01035->SetMinimum(741.7778);
   Graph_Graph01035->SetMaximum(9858.9);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01035->GetXaxis()->SetRange(22,88);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
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
