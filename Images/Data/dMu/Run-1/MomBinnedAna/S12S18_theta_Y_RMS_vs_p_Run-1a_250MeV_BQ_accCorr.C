void S12S18_theta_Y_RMS_vs_p_Run-1a_250MeV_BQ_accCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 11:39:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(471.0388,0.04936604,3018.072,39.00778);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1109[11] = {
   456.0315,
   654.9568,
   883.9284,
   1127.495,
   1373.325,
   1619.956,
   1866.969,
   2116.15,
   2359.852,
   2607.406,
   2781.74};
   Double_t Graph0_fy1109[11] = {
   35.697,
   29.09545,
   22.63137,
   20.04269,
   17.93133,
   15.52932,
   13.58844,
   11.33827,
   9.288555,
   7.039167,
   5.459436};
   Double_t Graph0_fex1109[11] = {
   0.1120561,
   0.07831606,
   0.05238325,
   0.04759446,
   0.04687676,
   0.05184388,
   0.06296364,
   0.0791128,
   0.1034642,
   0.142837,
   0.2374667};
   Double_t Graph0_fey1109[11] = {
   0.09418504,
   0.02398609,
   0.01187444,
   0.009343795,
   0.008341559,
   0.007995392,
   0.00844329,
   0.00884707,
   0.00960768,
   0.01044962,
   0.03490757};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1109,Graph0_fy1109,Graph0_fex1109,Graph0_fey1109);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01109 = new TH1F("Graph_Graph01109","S12S18",100,223.3137,3014.583);
   Graph_Graph01109->SetMinimum(3.945207);
   Graph_Graph01109->SetMaximum(35.11194);
   Graph_Graph01109->SetDirectory(0);
   Graph_Graph01109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01109->SetLineColor(ci);
   Graph_Graph01109->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01109->GetXaxis()->SetRange(19,91);
   Graph_Graph01109->GetXaxis()->CenterTitle(true);
   Graph_Graph01109->GetXaxis()->SetLabelFont(42);
   Graph_Graph01109->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01109->GetXaxis()->SetTitleFont(42);
   Graph_Graph01109->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01109->GetYaxis()->CenterTitle(true);
   Graph_Graph01109->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01109->GetYaxis()->SetLabelFont(42);
   Graph_Graph01109->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01109->GetYaxis()->SetTitleFont(42);
   Graph_Graph01109->GetZaxis()->SetLabelFont(42);
   Graph_Graph01109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01109);
   
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
