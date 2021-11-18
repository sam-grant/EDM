void S0S12S18_Y_RMS_vs_p_trackRecoControl_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:31:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.6469,12.22058,2744.532,14.29041);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1069[11] = {
   453.0417,
   656.6012,
   884.5758,
   1123.455,
   1363.525,
   1601.494,
   1825.195,
   2101.26,
   2412.734,
   2638.441,
   2791.028};
   Double_t Graph0_fy1069[11] = {
   13.89643,
   13.36337,
   13.18557,
   13.14749,
   13.10724,
   13.09364,
   13.07676,
   12.91971,
   12.6469,
   12.65041,
   12.75001};
   Double_t Graph0_fex1069[11] = {
   0.1633085,
   0.1217683,
   0.08184431,
   0.07528525,
   0.08685436,
   0.1236228,
   0.2559798,
   1.474004,
   0.5942343,
   0.3191259,
   0.2722142};
   Double_t Graph0_fey1069[11] = {
   0.04900528,
   0.01698984,
   0.01073289,
   0.009760452,
   0.01131101,
   0.01667818,
   0.03929169,
   0.1618763,
   0.08134442,
   0.0418347,
   0.0787969};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01069 = new TH1F("Graph_Graph01069","S0S12S18_",100,219.0363,3025.142);
   Graph_Graph01069->SetMinimum(12.42757);
   Graph_Graph01069->SetMaximum(14.08343);
   Graph_Graph01069->SetDirectory(0);
   Graph_Graph01069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01069->SetLineColor(ci);
   Graph_Graph01069->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01069->GetXaxis()->SetRange(19,82);
   Graph_Graph01069->GetXaxis()->CenterTitle(true);
   Graph_Graph01069->GetXaxis()->SetLabelFont(42);
   Graph_Graph01069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01069->GetXaxis()->SetTitleFont(42);
   Graph_Graph01069->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01069->GetYaxis()->CenterTitle(true);
   Graph_Graph01069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01069->GetYaxis()->SetLabelFont(42);
   Graph_Graph01069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01069->GetYaxis()->SetTitleFont(42);
   Graph_Graph01069->GetZaxis()->SetLabelFont(42);
   Graph_Graph01069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01069);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
