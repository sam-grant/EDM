void S18_c_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.5135,-3.657066,2721.882,14.73455);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[22] = {
   367.0021,
   457.2349,
   570.0318,
   694.4706,
   815.6729,
   938.5321,
   1062.883,
   1188.197,
   1312.61,
   1435.711,
   1561.996,
   1685.036,
   1810.508,
   1934.917,
   2060.262,
   2184.766,
   2309.001,
   2433.43,
   2559.663,
   2677.98,
   2781.675,
   2884.375};
   Double_t Graph0_fy1027[22] = {
   10.44134,
   -0.1161056,
   0.006831672,
   -0.05744187,
   -0.05389041,
   -0.09427016,
   -0.08395715,
   -0.02572284,
   0.03492252,
   0.05363863,
   0.002200437,
   -0.03090747,
   -0.02419393,
   -0.04400366,
   -0.01275784,
   -0.02070012,
   -0.003334422,
   -0.05069361,
   -0.03605098,
   -0.1204032,
   -0.2853186,
   -0.3233604};
   Double_t Graph0_fex1027[22] = {
   0.2114459,
   0.1061715,
   0.07025293,
   0.04927527,
   0.03993018,
   0.03621172,
   0.03428821,
   0.03333799,
   0.03409397,
   0.03439993,
   0.03714179,
   0.03934393,
   0.04472775,
   0.04911804,
   0.05664353,
   0.06272883,
   0.07289786,
   0.08826086,
   0.1042874,
   0.1212594,
   0.2592488,
   1.230174};
   Double_t Graph0_fey1027[22] = {
   1.227942,
   0.1095156,
   0.05285286,
   0.03245305,
   0.02269607,
   0.01873583,
   0.01647836,
   0.01489222,
   0.01410526,
   0.01344667,
   0.01348355,
   0.01315515,
   0.0137801,
   0.01402722,
   0.01480571,
   0.01524037,
   0.01615399,
   0.01765836,
   0.01899148,
   0.02136838,
   0.05618655,
   0.2684362};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S18",100,114.9091,3137.487);
   Graph_Graph01027->SetMinimum(-1.817904);
   Graph_Graph01027->SetMaximum(12.89539);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->SetRange(22,79);
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
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
