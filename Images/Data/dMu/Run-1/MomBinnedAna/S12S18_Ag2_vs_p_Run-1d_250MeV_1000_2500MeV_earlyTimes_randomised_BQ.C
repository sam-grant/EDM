void S12S18_Ag2_vs_p_Run-1d_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2282,-0.01415604,2704.209,0.02337902);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[11] = {
   456.1818,
   654.8556,
   884.0354,
   1127.579,
   1373.427,
   1619.978,
   1866.931,
   2116.345,
   2359.544,
   2607.526,
   2781.946};
   Double_t Graph0_fy1107[11] = {
   0.05416314,
   0.03188638,
   -0.001809967,
   -0.006418643,
   0.008877776,
   -0.009034118,
   -0.003121829,
   0.01680292,
   -0.01302839,
   0.000693352,
   0.03049176};
   Double_t Graph0_fex1107[11] = {
   0.08787385,
   0.06168673,
   0.04108342,
   0.03725922,
   0.03658865,
   0.04039006,
   0.04912782,
   0.06164003,
   0.08047278,
   0.1114733,
   0.1852503};
   Double_t Graph0_fey1107[11] = {
   0.1240262,
   0.03142618,
   0.01599541,
   0.01212921,
   0.01053966,
   0.01012234,
   0.01040185,
   0.01110122,
   0.01235751,
   0.01468908,
   0.05673396};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","S12S18",100,223.4902,3014.735);
   Graph_Graph01107->SetMinimum(-0.01040254);
   Graph_Graph01107->SetMaximum(0.01962552);
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
