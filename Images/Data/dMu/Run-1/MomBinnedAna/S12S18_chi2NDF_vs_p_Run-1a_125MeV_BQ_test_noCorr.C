void S12S18_chi2NDF_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(494.8944,0.5174923,3023.107,2.093037);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1042[22] = {
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
   Double_t Graph0_fy1042[22] = {
   inf,
   1.164937,
   1.062735,
   1.102975,
   1.630701,
   1.123611,
   1.277562,
   1.101203,
   1.147855,
   0.8317044,
   1.202672,
   0.9566761,
   0.9808721,
   0.9888838,
   0.9137277,
   1.268678,
   1.182505,
   1.331886,
   0.9901367,
   1.311434,
   2.78743,
   inf};
   Double_t Graph0_fex1042[22] = {
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
   Double_t Graph0_fey1042[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01042 = new TH1F("Graph_Graph01042","S12S18",100,113.7759,3132.537);
   Graph_Graph01042->SetMinimum(0.6750468);
   Graph_Graph01042->SetMaximum(1.935483);
   Graph_Graph01042->SetDirectory(0);
   Graph_Graph01042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01042->SetLineColor(ci);
   Graph_Graph01042->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01042->GetXaxis()->SetRange(22,88);
   Graph_Graph01042->GetXaxis()->CenterTitle(true);
   Graph_Graph01042->GetXaxis()->SetLabelFont(42);
   Graph_Graph01042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01042->GetXaxis()->SetTitleFont(42);
   Graph_Graph01042->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
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
