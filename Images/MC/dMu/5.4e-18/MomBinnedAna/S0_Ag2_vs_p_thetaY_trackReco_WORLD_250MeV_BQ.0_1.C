void S0_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:31:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.7171,-1.607561,3409.979,0.2779436);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[11] = {
   451.3795,
   653.2084,
   880.0107,
   1122.885,
   1371.272,
   1620.698,
   1868.122,
   2116.398,
   2362.901,
   2615.842,
   2789.677};
   Double_t Graph0_fy1059[11] = {
   -0.4202652,
   0.07517384,
   0.05247963,
   0.01851806,
   0.004426314,
   0.06655769,
   -0.0005686943,
   -0.007427993,
   -0.01919854,
   0.05299622,
   -0.1014939};
   Double_t Graph0_fex1059[11] = {
   0.2570146,
   0.2168445,
   0.1578235,
   0.1543579,
   0.1647142,
   0.1816809,
   0.208312,
   0.2527105,
   0.3151618,
   0.3975541,
   0.4627629};
   Double_t Graph0_fey1059[11] = {
   0.3466429,
   0.1156459,
   0.06668146,
   0.05486106,
   0.05010708,
   0.04769756,
   0.04725044,
   0.04888526,
   0.05215856,
   0.05480467,
   0.121935};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","S0_",100,217.2208,3024.042);
   Graph_Graph01059->SetMinimum(-1.41901);
   Graph_Graph01059->SetMaximum(0.08939311);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01059->GetXaxis()->SetRange(0,101);
   Graph_Graph01059->GetXaxis()->CenterTitle(true);
   Graph_Graph01059->GetXaxis()->SetLabelFont(42);
   Graph_Graph01059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01059->GetXaxis()->SetTitleFont(42);
   Graph_Graph01059->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01059->GetYaxis()->CenterTitle(true);
   Graph_Graph01059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01059->GetYaxis()->SetLabelFont(42);
   Graph_Graph01059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01059->GetYaxis()->SetTitleFont(42);
   Graph_Graph01059->GetZaxis()->SetLabelFont(42);
   Graph_Graph01059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01059);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
