void S12S18_AEDMOverMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7656,-0.376996,2726.81,0.6836136);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1042[22] = {
   367.1918,
   456.6147,
   570.0834,
   694.7135,
   815.7883,
   938.6512,
   1062.729,
   1188.095,
   1312.704,
   1435.772,
   1562,
   1685.097,
   1810.599,
   1935.109,
   2060.314,
   2185.016,
   2309.07,
   2433.164,
   2559.726,
   2678.651,
   2780.754,
   2885.425};
   Double_t Graph0_fy1042[22] = {
   0.00340454,
   4.808462e-05,
   -0.000267952,
   0.0002800063,
   0.0002670539,
   -0.000142919,
   3.220019e-05,
   0.0002826222,
   -4.67118e-05,
   -2.071025e-06,
   -0.0002046222,
   5.232276e-06,
   0.000236201,
   -1.107052e-05,
   -0.000187093,
   6.829193e-06,
   -0.0001180964,
   3.753673e-05,
   0.0005617606,
   4.236772e-05,
   -0.0008241019,
   0.1533088};
   Double_t Graph0_fex1042[22] = {
   0.1970936,
   0.1002381,
   0.06733037,
   0.04602636,
   0.03727099,
   0.03359952,
   0.03198166,
   0.03090757,
   0.03144366,
   0.03165276,
   0.03395879,
   0.03588086,
   0.0403638,
   0.04430086,
   0.05071275,
   0.05596869,
   0.06482442,
   0.07808434,
   0.09274195,
   0.1063002,
   0.2145415,
   1.394003};
   Double_t Graph0_fey1042[22] = {
   0.01282259,
   0.0006410324,
   -0.0003124269,
   0.0002370145,
   0.0001823815,
   -0.0001541247,
   0.0001410687,
   0.0001468869,
   -0.0001512075,
   -0.0001341038,
   -0.0001632056,
   0.0002139611,
   0.0002176054,
   -0.0002744357,
   -0.000287605,
   0.0002855932,
   -0.0004178768,
   0.0005154518,
   0.0006130907,
   0.0005879553,
   -0.001730848,
   0.3535365};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01042 = new TH1F("Graph_Graph01042","S12S18",100,115.0123,3138.801);
   Graph_Graph01042->SetMinimum(-0.2709351);
   Graph_Graph01042->SetMaximum(0.5775526);
   Graph_Graph01042->SetDirectory(0);
   Graph_Graph01042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01042->SetLineColor(ci);
   Graph_Graph01042->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01042->GetXaxis()->SetRange(21,79);
   Graph_Graph01042->GetXaxis()->CenterTitle(true);
   Graph_Graph01042->GetXaxis()->SetLabelFont(42);
   Graph_Graph01042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01042->GetXaxis()->SetTitleFont(42);
   Graph_Graph01042->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01042->GetYaxis()->CenterTitle(true);
   Graph_Graph01042->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01042->GetYaxis()->SetLabelFont(42);
   Graph_Graph01042->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01042->GetYaxis()->SetTitleFont(42);
   Graph_Graph01042->GetZaxis()->SetLabelFont(42);
   Graph_Graph01042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01042);
   
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
