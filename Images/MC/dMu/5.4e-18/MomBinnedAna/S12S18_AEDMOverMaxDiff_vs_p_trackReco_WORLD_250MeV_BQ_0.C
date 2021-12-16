void S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 12:48:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3154,-0.00452554,3406.964,0.005149933);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[11] = {
   451.859,
   653.3117,
   880.4285,
   1123.038,
   1370.992,
   1619.971,
   1866.545,
   2115.011,
   2362.886,
   2613.266,
   2787.684};
   Double_t Graph0_fy1181[11] = {
   -0.0003407467,
   0.001158395,
   0.001067307,
   0.001487067,
   0.001207083,
   0.001672175,
   0.002512122,
   0.001753871,
   0.001609283,
   0.003510114,
   0.002286925};
   Double_t Graph0_fex1181[11] = {
   0.09988357,
   0.08417764,
   0.06086071,
   0.05941364,
   0.06350369,
   0.07028425,
   0.08235894,
   0.1033696,
   0.1351177,
   0.1638907,
   0.205084};
   Double_t Graph0_fey1181[11] = {
   -0.000752291,
   0.0002790317,
   0.0001875378,
   0.0001865153,
   0.0001695897,
   0.0001810639,
   0.0002653948,
   0.0002832923,
   0.0003803613,
   0.000496482,
   0.001853028};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","S12S18_",100,218.1461,3021.502);
   Graph_Graph01181->SetMinimum(-0.003557992);
   Graph_Graph01181->SetMaximum(0.004182386);
   Graph_Graph01181->SetDirectory(0);
   Graph_Graph01181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01181->SetLineColor(ci);
   Graph_Graph01181->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01181->GetXaxis()->SetRange(0,101);
   Graph_Graph01181->GetXaxis()->CenterTitle(true);
   Graph_Graph01181->GetXaxis()->SetLabelFont(42);
   Graph_Graph01181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01181->GetXaxis()->SetTitleFont(42);
   Graph_Graph01181->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
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
