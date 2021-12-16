void S12_Ag2_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:16:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.631,-0.1236732,3036.691,0.8927648);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[22] = {
   366.9979,
   456.7467,
   570.2452,
   695.0474,
   815.9733,
   938.7135,
   1062.734,
   1188.27,
   1312.739,
   1435.93,
   1561.976,
   1685.237,
   1810.655,
   1935.236,
   2060.303,
   2185.135,
   2309.226,
   2432.987,
   2559.503,
   2679.174,
   2780.715,
   2888.448};
   Double_t Graph0_fy1063[22] = {
   1.657101,
   -0.3408884,
   0.007578219,
   0.01710254,
   0.03435992,
   -0.001012921,
   -0.003279781,
   -0.01770889,
   0.005799007,
   0.007851549,
   0.01459053,
   0.02041391,
   -0.02758761,
   -0.02690994,
   -0.004442585,
   -0.006456046,
   -0.005872579,
   -0.01953642,
   -0.02590395,
   -0.00752029,
   0.1173985,
   1.10208};
   Double_t Graph0_fex1063[22] = {
   0.2632858,
   0.1313502,
   0.0889277,
   0.05996606,
   0.04796851,
   0.04307472,
   0.04092389,
   0.03946989,
   0.03984111,
   0.03998827,
   0.04282143,
   0.04494925,
   0.05029794,
   0.05500769,
   0.06267773,
   0.06901985,
   0.07946472,
   0.09532527,
   0.1141395,
   0.1308164,
   0.261301,
   1.874823};
   Double_t Graph0_fey1063[22] = {
   2.095993,
   0.1939608,
   0.09485466,
   0.05636783,
   0.03870962,
   0.03169168,
   0.02790366,
   0.02510714,
   0.02340867,
   0.02217021,
   0.02211113,
   0.02136126,
   0.02206564,
   0.02222297,
   0.02323831,
   0.02377501,
   0.02492438,
   0.02725094,
   0.02960554,
   0.03255577,
   0.0823887,
   1.239755};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S12",100,114.3759,3142.681);
   Graph_Graph01063->SetMinimum(-0.02202942);
   Graph_Graph01063->SetMaximum(0.791121);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(21,88);
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
