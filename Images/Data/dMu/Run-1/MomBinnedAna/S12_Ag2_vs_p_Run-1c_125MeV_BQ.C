void S12_Ag2_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.5321,-0.1135225,3003.766,0.7590355);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[22] = {
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
   Double_t Graph0_fy1063[22] = {
   -0.6697119,
   0.07053858,
   0.03142406,
   0.07721789,
   0.00620755,
   0.04569848,
   0.01179415,
   0.02060397,
   0.009634295,
   -0.003907736,
   0.004029182,
   -0.03434911,
   0.006611827,
   0.006923175,
   -0.02249625,
   -0.02955343,
   0.006823301,
   0.01090396,
   0.02634805,
   0.008082442,
   0.02826456,
   1.00778};
   Double_t Graph0_fex1063[22] = {
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
   Double_t Graph0_fey1063[22] = {
   1.697616,
   0.1581753,
   0.07701766,
   0.04586556,
   0.03144765,
   0.02575192,
   0.02256417,
   0.02038619,
   0.01908665,
   0.01800087,
   0.01805103,
   0.01743229,
   0.01798319,
   0.01817114,
   0.0190468,
   0.01943434,
   0.02045606,
   0.02245713,
   0.02430309,
   0.02707164,
   0.06835741,
   0.5276575};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S12",100,114.349,3143.882);
   Graph_Graph01063->SetMinimum(-0.02626667);
   Graph_Graph01063->SetMaximum(0.6717797);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(21,87);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
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
