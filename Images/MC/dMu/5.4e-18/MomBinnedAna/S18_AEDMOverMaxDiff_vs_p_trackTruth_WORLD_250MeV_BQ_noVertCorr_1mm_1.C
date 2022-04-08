void S18_AEDMOverMaxDiff_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:54:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8222,-0.003249653,3380.472,0.006196005);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1144[11] = {
   451.9486,
   653.1773,
   880.5114,
   1122.959,
   1370.855,
   1619.967,
   1866.721,
   2114.459,
   2363.098,
   2613.327,
   2791.578};
   Double_t Graph0_fy1144[11] = {
   -0.001675377,
   0.001286649,
   0.0008182074,
   0.0008750736,
   0.001484082,
   0.001666084,
   0.00128701,
   0.001119211,
   0.000939446,
   0.003755302,
   -0.0001074577};
   Double_t Graph0_fex1144[11] = {
   0.1471548,
   0.1247107,
   0.09035711,
   0.0884312,
   0.09508117,
   0.1056574,
   0.1244836,
   0.1565771,
   0.2067098,
   0.2497165,
   0.3518313};
   Double_t Graph0_fey1144[11] = {
   -0.001094584,
   0.0004366868,
   0.0002951671,
   0.0002779702,
   0.0003134106,
   0.0003489578,
   0.0003900679,
   0.0005448866,
   0.0005892539,
   0.000866427,
   -0.00281994};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1144,Graph0_fy1144,Graph0_fex1144,Graph0_fey1144);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01144 = new TH1F("Graph_Graph01144","S18_",100,217.7887,3025.942);
   Graph_Graph01144->SetMinimum(-0.002305087);
   Graph_Graph01144->SetMaximum(0.005251439);
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
