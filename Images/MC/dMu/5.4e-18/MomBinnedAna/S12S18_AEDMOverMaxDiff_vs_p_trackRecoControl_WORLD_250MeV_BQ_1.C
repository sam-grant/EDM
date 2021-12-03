void S12S18_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:28:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.9164,-0.00925941,3028.305,0.001413738);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1093[11] = {
   452.9199,
   656.5542,
   884.8685,
   1123.522,
   1363.588,
   1601.322,
   1825.172,
   2101.221,
   2411.982,
   2637.272,
   2790.613};
   Double_t Graph0_fy1093[11] = {
   0.002230258,
   -0.0009211016,
   -0.0005350496,
   -0.0004148506,
   -0.0006782276,
   -0.00102005,
   -0.0004381897,
   -0.01028368,
   0.0003565359,
   -0.002067839,
   -0.007515599};
   Double_t Graph0_fex1093[11] = {
   0.2021944,
   0.150332,
   0.1006761,
   0.09254361,
   0.1066246,
   0.151529,
   0.3161417,
   1.816055,
   0.7409915,
   0.4041897,
   0.3585213};
   Double_t Graph0_fey1093[11] = {
   0.00158901,
   -0.0004498864,
   -0.0002354059,
   -0.0001867687,
   -0.0002255969,
   -0.0003575189,
   -0.001074936,
   -0.004243328,
   0.002156263,
   -0.001390065,
   -0.002984505};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01093 = new TH1F("Graph_Graph01093","S12S18_",100,218.8923,3024.797);
   Graph_Graph01093->SetMinimum(-0.008192096);
   Graph_Graph01093->SetMaximum(0.0003464227);
   Graph_Graph01093->SetDirectory(0);
   Graph_Graph01093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01093->SetLineColor(ci);
   Graph_Graph01093->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01093->GetXaxis()->SetRange(19,91);
   Graph_Graph01093->GetXaxis()->CenterTitle(true);
   Graph_Graph01093->GetXaxis()->SetLabelFont(42);
   Graph_Graph01093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01093->GetXaxis()->SetTitleFont(42);
   Graph_Graph01093->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01093->GetYaxis()->CenterTitle(true);
   Graph_Graph01093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01093->GetYaxis()->SetLabelFont(42);
   Graph_Graph01093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01093->GetYaxis()->SetTitleFont(42);
   Graph_Graph01093->GetZaxis()->SetLabelFont(42);
   Graph_Graph01093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01093);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
