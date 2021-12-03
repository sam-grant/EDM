void S12S18_Momentum_Y_RMS_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(494.8944,11.03433,3023.107,26.23544);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[22] = {
   367.1739,
   456.5895,
   570.4502,
   695.5266,
   815.6818,
   938.7102,
   1062.099,
   1188.257,
   1312.882,
   1435.895,
   1561.693,
   1685.399,
   1809.923,
   1935.392,
   2060.949,
   2185.315,
   2308.884,
   2432.874,
   2559.022,
   2678.209,
   2780.775,
   2879.577};
   Double_t Graph0_fy1045[22] = {
   11.07723,
   14.31295,
   15.3774,
   16.29398,
   16.58665,
   17.5398,
   18.22127,
   19.10002,
   19.63305,
   20.08656,
   20.60306,
   20.23701,
   20.06719,
   19.55245,
   19.13864,
   18.68995,
   18.13353,
   16.58911,
   15.53395,
   14.8845,
   14.76519,
   17.39041};
   Double_t Graph0_fex1045[22] = {
   1.834592,
   0.8890785,
   0.6206881,
   0.4163346,
   0.338383,
   0.3019082,
   0.2876941,
   0.2762181,
   0.2808951,
   0.2821379,
   0.3041337,
   0.3245477,
   0.3592058,
   0.3959237,
   0.4420454,
   0.4966082,
   0.5708508,
   0.6793518,
   0.8257381,
   0.9505763,
   1.954565,
   1.395883};
   Double_t Graph0_fey1045[22] = {
   2.476943,
   0.2998834,
   0.1876968,
   0.1360006,
   0.1107254,
   0.1034549,
   0.1033433,
   0.104866,
   0.1077147,
   0.1116851,
   0.1228289,
   0.1280208,
   0.1402238,
   0.1519305,
   0.1681418,
   0.1823605,
   0.2036576,
   0.2194972,
   0.2526597,
   0.2925851,
   0.7781941,
   8.695203};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S12S18",100,113.7759,3132.537);
   Graph_Graph01045->SetMinimum(12.55445);
   Graph_Graph01045->SetMaximum(24.71533);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01045->GetXaxis()->SetRange(22,88);
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
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
