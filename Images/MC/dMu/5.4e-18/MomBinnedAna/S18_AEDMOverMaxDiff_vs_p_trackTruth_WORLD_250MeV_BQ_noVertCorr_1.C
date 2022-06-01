void S18_AEDMOverMaxDiff_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 29 17:11:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6101,-0.002112696,3380.686,0.005352512);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1144[11] = {
   452.1108,
   653.3423,
   880.5733,
   1123.012,
   1370.957,
   1619.772,
   1866.605,
   2115.051,
   2363.383,
   2612.035,
   2791.903};
   Double_t Graph0_fy1144[11] = {
   -0.0002841424,
   0.00103775,
   0.001038089,
   0.001010419,
   0.001586385,
   0.001837124,
   0.002064977,
   0.00146927,
   0.002546511,
   0.003520858,
   0.0009847793};
   Double_t Graph0_fex1144[11] = {
   0.09679788,
   0.08162527,
   0.05879418,
   0.057379,
   0.06148902,
   0.06814,
   0.08043393,
   0.1008042,
   0.1326158,
   0.1588366,
   0.2400074};
   Double_t Graph0_fey1144[11] = {
   -0.0007248004,
   0.0002811908,
   0.0002041066,
   0.0002013199,
   0.0002217065,
   0.0002481632,
   0.0002891589,
   0.0003617381,
   0.0004750626,
   0.0005874526,
   0.001853274};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1144,Graph0_fy1144,Graph0_fex1144,Graph0_fey1144);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01144 = new TH1F("Graph_Graph01144","S18_",100,218.0011,3026.156);
   Graph_Graph01144->SetMinimum(-0.001366175);
   Graph_Graph01144->SetMaximum(0.004605991);
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
