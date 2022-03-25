void S12_AEDMOverMaxDiff_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.5321,-0.02426506,3003.766,0.01679924);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1071[22] = {
   367.0352,
   456.9819,
   570.2976,
   695.1562,
   816.0421,
   938.5715,
   1062.782,
   1188.409,
   1312.658,
   1436.007,
   1561.937,
   1685.365,
   1810.622,
   1935.171,
   2060.292,
   2185.098,
   2309.109,
   2432.863,
   2559.588,
   2678.779,
   2780.736,
   2889.944};
   Double_t Graph0_fy1071[22] = {
   0.1088593,
   0.005545278,
   0.003691588,
   0.002869999,
   0.0001065643,
   0.001023143,
   0.001256751,
   0.003208378,
   0.004729468,
   0.002956692,
   0.003668644,
   0.004329244,
   0.005259137,
   0.005024861,
   0.004263725,
   0.002613866,
   0.008808222,
   -0.0006783937,
   0.01059856,
   0.004460323,
   0.000622892,
   -0.04695902};
   Double_t Graph0_fex1071[22] = {
   0.2251397,
   0.1080441,
   0.07224719,
   0.04905187,
   0.03899622,
   0.03509039,
   0.03322333,
   0.03218015,
   0.03248772,
   0.03258516,
   0.03500937,
   0.0367165,
   0.04120481,
   0.04500112,
   0.0513695,
   0.05678027,
   0.06525989,
   0.07833329,
   0.09434737,
   0.1080842,
   0.2147682,
   1.476472};
   Double_t Graph0_fey1071[22] = {
   0.04860792,
   0.005089534,
   0.002896848,
   0.001972767,
   0.001547742,
   0.001377366,
   0.001309573,
   0.001270173,
   0.001272812,
   0.001288184,
   0.001373777,
   0.001450145,
   0.00161844,
   0.001773694,
   0.002012014,
   0.002236063,
   0.002568968,
   -0.003087884,
   0.0037171,
   0.004537192,
   0.01219429,
   -0.1070438};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1071,Graph0_fy1071,Graph0_fex1071,Graph0_fey1071);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01071 = new TH1F("Graph_Graph01071","S12",100,114.349,3143.882);
   Graph_Graph01071->SetMinimum(-0.02015863);
   Graph_Graph01071->SetMaximum(0.01269281);
   Graph_Graph01071->SetDirectory(0);
   Graph_Graph01071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01071->SetLineColor(ci);
   Graph_Graph01071->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01071->GetXaxis()->SetRange(21,87);
   Graph_Graph01071->GetXaxis()->CenterTitle(true);
   Graph_Graph01071->GetXaxis()->SetLabelFont(42);
   Graph_Graph01071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetXaxis()->SetTitleFont(42);
   Graph_Graph01071->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01071->GetYaxis()->CenterTitle(true);
   Graph_Graph01071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01071->GetYaxis()->SetLabelFont(42);
   Graph_Graph01071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01071->GetYaxis()->SetTitleFont(42);
   Graph_Graph01071->GetZaxis()->SetLabelFont(42);
   Graph_Graph01071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01071);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
