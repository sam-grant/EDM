void S12S18_AEDMOverMaxDiff_vs_p_Run-1d_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:20:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.5464,0.0004399531,2713.284,0.005465349);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1115[11] = {
   456.1275,
   654.8825,
   884.0267,
   1127.587,
   1373.406,
   1619.967,
   1866.905,
   2116.177,
   2359.563,
   2608.049,
   2791.411};
   Double_t Graph0_fy1115[11] = {
   0.001830271,
   0.002658416,
   0.002413466,
   0.001168793,
   0.002118539,
   0.002431529,
   0.003615453,
   0.003292693,
   0.003564409,
   0.004180419,
   0.006424862};
   Double_t Graph0_fex1115[11] = {
   0.04575766,
   0.03211299,
   0.02141739,
   0.01941565,
   0.01906774,
   0.02106441,
   0.02562821,
   0.03226453,
   0.04226119,
   0.05850123,
   0.1103473};
   Double_t Graph0_fey1115[11] = {
   0.00209169,
   0.0006778288,
   0.0004346088,
   0.0003859934,
   0.0003841613,
   0.0004249989,
   0.0005138182,
   0.0006464358,
   0.0008587269,
   0.001230273,
   0.004828914};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1115,Graph0_fy1115,Graph0_fex1115,Graph0_fey1115);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01115 = new TH1F("Graph_Graph01115","S12S18",100,222.5378,3025.065);
   Graph_Graph01115->SetMinimum(0.0009424928);
   Graph_Graph01115->SetMaximum(0.00496281);
   Graph_Graph01115->SetDirectory(0);
   Graph_Graph01115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01115->SetLineColor(ci);
   Graph_Graph01115->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01115->GetXaxis()->SetRange(28,82);
   Graph_Graph01115->GetXaxis()->CenterTitle(true);
   Graph_Graph01115->GetXaxis()->SetLabelFont(42);
   Graph_Graph01115->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01115->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01115->GetXaxis()->SetTitleFont(42);
   Graph_Graph01115->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01115->GetYaxis()->CenterTitle(true);
   Graph_Graph01115->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01115->GetYaxis()->SetLabelFont(42);
   Graph_Graph01115->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01115->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01115->GetYaxis()->SetTitleFont(42);
   Graph_Graph01115->GetZaxis()->SetLabelFont(42);
   Graph_Graph01115->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01115);
   
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
