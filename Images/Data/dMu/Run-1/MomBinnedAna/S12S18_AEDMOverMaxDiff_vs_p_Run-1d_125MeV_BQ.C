void S12S18_AEDMOverMaxDiff_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8762,-0.01772577,3032.589,0.01012862);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[22] = {
   367.2513,
   457.0513,
   570.1118,
   694.7888,
   815.8518,
   938.5172,
   1062.732,
   1188.224,
   1312.688,
   1435.771,
   1561.973,
   1685.085,
   1810.538,
   1935.019,
   2060.261,
   2184.905,
   2309.088,
   2433.055,
   2559.673,
   2678.6,
   2781.198,
   2885.782};
   Double_t Graph0_fy1181[22] = {
   0.01130057,
   -0.001225198,
   0.003845589,
   0.001709667,
   0.001240582,
   0.001457499,
   0.001939797,
   0.001691071,
   0.003206005,
   0.002969165,
   0.002185168,
   0.003527078,
   0.003424241,
   0.004417322,
   0.004973071,
   0.004716439,
   0.005516643,
   0.004380211,
   0.004846583,
   0.005950942,
   0.006121304,
   -0.03798188};
   Double_t Graph0_fex1181[22] = {
   0.109463,
   0.05479406,
   0.03651396,
   0.02514983,
   0.02028487,
   0.01833508,
   0.0173851,
   0.0168304,
   0.01713305,
   0.01722648,
   0.01854525,
   0.01956557,
   0.02210779,
   0.02422989,
   0.02774509,
   0.03065898,
   0.03552339,
   0.0428648,
   0.05104552,
   0.05848479,
   0.120145,
   0.6851676};
   Double_t Graph0_fey1181[22] = {
   0.02482184,
   -0.002566602,
   0.001462189,
   0.001009829,
   0.0008028537,
   0.0007189266,
   0.000685574,
   0.000665552,
   0.0006703216,
   0.0006806526,
   0.0007281898,
   0.0007724347,
   0.000866886,
   0.000955655,
   0.001088376,
   0.001208251,
   0.00139719,
   0.001689126,
   0.002007021,
   0.002438628,
   0.006616661,
   -0.06925455};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","S12S18",100,115.2092,3138.4);
   Graph_Graph01181->SetMinimum(-0.01494033);
   Graph_Graph01181->SetMaximum(0.007343178);
   Graph_Graph01181->SetDirectory(0);
   Graph_Graph01181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01181->SetLineColor(ci);
   Graph_Graph01181->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01181->GetXaxis()->SetRange(21,88);
   Graph_Graph01181->GetXaxis()->CenterTitle(true);
   Graph_Graph01181->GetXaxis()->SetLabelFont(42);
   Graph_Graph01181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01181->GetXaxis()->SetTitleFont(42);
   Graph_Graph01181->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01181->GetYaxis()->CenterTitle(true);
   Graph_Graph01181->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01181->GetYaxis()->SetLabelFont(42);
   Graph_Graph01181->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01181->GetYaxis()->SetTitleFont(42);
   Graph_Graph01181->GetZaxis()->SetLabelFont(42);
   Graph_Graph01181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01181);
   
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
