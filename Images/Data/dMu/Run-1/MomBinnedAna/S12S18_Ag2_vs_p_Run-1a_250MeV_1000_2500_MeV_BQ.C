void S12S18_Ag2_vs_p_Run-1a_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:11:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.0566,-0.0328177,2704.054,0.04992466);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[11] = {
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
   Double_t Graph0_fy1107[11] = {
   0.2038787,
   0.06389114,
   0.03736359,
   -0.002871895,
   0.01703212,
   -0.00609031,
   -0.008983783,
   -0.01277017,
   -0.03070539,
   0.0129214,
   -0.03234983};
   Double_t Graph0_fex1107[11] = {
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
   Double_t Graph0_fey1107[11] = {
   0.1577627,
   0.03988225,
   0.02038165,
   0.01550612,
   0.01349455,
   0.01296239,
   0.01332034,
   0.01426335,
   0.01593669,
   0.01885648,
   0.0726552};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","S12S18",100,223.3137,3014.583);
   Graph_Graph01107->SetMinimum(-0.02454347);
   Graph_Graph01107->SetMaximum(0.04165042);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01107->GetXaxis()->SetRange(28,82);
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01107->GetYaxis()->CenterTitle(true);
   Graph_Graph01107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01107->GetYaxis()->SetLabelFont(42);
   Graph_Graph01107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01107->GetYaxis()->SetTitleFont(42);
   Graph_Graph01107->GetZaxis()->SetLabelFont(42);
   Graph_Graph01107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01107);
   
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
