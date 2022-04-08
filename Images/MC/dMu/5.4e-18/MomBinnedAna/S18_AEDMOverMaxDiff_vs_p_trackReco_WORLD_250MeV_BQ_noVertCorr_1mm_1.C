void S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.8806,-0.00330331,3375.928,0.005472612);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1144[11] = {
   451.9235,
   653.1177,
   880.4848,
   1123.086,
   1370.894,
   1619.625,
   1866.463,
   2114.779,
   2363.232,
   2612.947,
   2788.008};
   Double_t Graph0_fy1144[11] = {
   -0.000707806,
   0.0008610833,
   0.0008722003,
   0.0009269306,
   0.001377008,
   0.00174262,
   0.001586046,
   0.001195914,
   0.001014929,
   0.00326713,
   0.0007535768};
   Double_t Graph0_fex1144[11] = {
   0.1342794,
   0.1136836,
   0.08233015,
   0.08050679,
   0.086327,
   0.09611165,
   0.1135297,
   0.1432651,
   0.1886038,
   0.2260298,
   0.2886326};
   Double_t Graph0_fey1144[11] = {
   -0.0009967739,
   0.0003748857,
   0.0002616601,
   0.0002414773,
   0.0002639907,
   0.0003122057,
   0.0003498532,
   0.0004070346,
   0.0005267331,
   0.000742829,
   0.002594233};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1144,Graph0_fy1144,Graph0_fex1144,Graph0_fey1144);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01144 = new TH1F("Graph_Graph01144","S18_",100,218.1384,3021.947);
   Graph_Graph01144->SetMinimum(-0.002425718);
   Graph_Graph01144->SetMaximum(0.00459502);
   Graph_Graph01144->SetDirectory(0);
   Graph_Graph01144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01144->SetLineColor(ci);
   Graph_Graph01144->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01144->GetXaxis()->SetRange(0,100);
   Graph_Graph01144->GetXaxis()->CenterTitle(true);
   Graph_Graph01144->GetXaxis()->SetLabelFont(42);
   Graph_Graph01144->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01144->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01144->GetXaxis()->SetTitleFont(42);
   Graph_Graph01144->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01144->GetYaxis()->CenterTitle(true);
   Graph_Graph01144->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01144->GetYaxis()->SetLabelFont(42);
   Graph_Graph01144->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01144->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01144->GetYaxis()->SetTitleFont(42);
   Graph_Graph01144->GetZaxis()->SetLabelFont(42);
   Graph_Graph01144->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01144->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01144);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
