void S12S18_Ag2_vs_p_thetaY_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:27 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-166.9196,-0.3941737,3410.609,1.548494);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1170[11] = {
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
   Double_t Graph0_fy1170[11] = {
   0.4090637,
   0.1440948,
   -0.1058953,
   -0.0226587,
   0.02601712,
   0.05682344,
   -0.08309686,
   0.2543846,
   -0.0480923,
   -0.00833256,
   -0.07189515};
   Double_t Graph0_fex1170[11] = {
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
   Double_t Graph0_fey1170[11] = {
   0.2878106,
   0.08252139,
   0.04274089,
   0.03287473,
   0.03256927,
   0.04075435,
   0.08137443,
   0.3303726,
   0.1368408,
   0.05662393,
   0.09194822};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1170,Graph0_fy1170,Graph0_fex1170,Graph0_fey1170);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01170 = new TH1F("Graph_Graph01170","S12S18_",100,218.8923,3024.797);
   Graph_Graph01170->SetMinimum(-0.1999068);
   Graph_Graph01170->SetMaximum(1.354227);
   Graph_Graph01170->SetDirectory(0);
   Graph_Graph01170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01170->SetLineColor(ci);
   Graph_Graph01170->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01170->GetXaxis()->SetRange(0,101);
   Graph_Graph01170->GetXaxis()->CenterTitle(true);
   Graph_Graph01170->GetXaxis()->SetLabelFont(42);
   Graph_Graph01170->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01170->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01170->GetXaxis()->SetTitleFont(42);
   Graph_Graph01170->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01170->GetYaxis()->CenterTitle(true);
   Graph_Graph01170->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01170->GetYaxis()->SetLabelFont(42);
   Graph_Graph01170->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01170->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01170->GetYaxis()->SetTitleFont(42);
   Graph_Graph01170->GetZaxis()->SetLabelFont(42);
   Graph_Graph01170->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01170);
   
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
