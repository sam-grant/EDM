void S12_Ag2_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8825,-0.04228925,2727.342,0.06916147);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[22] = {
   367.2434,
   456.6615,
   570.2449,
   695.0723,
   815.9921,
   938.5616,
   1062.66,
   1188.29,
   1312.784,
   1435.901,
   1561.976,
   1685.265,
   1810.607,
   1935.134,
   2060.292,
   2185.028,
   2309.148,
   2432.963,
   2559.53,
   2679.191,
   2781.14,
   2886.432};
   Double_t Graph0_fy1019[22] = {
   -0.9107857,
   0.02436318,
   0.07206728,
   0.0486336,
   0.0529564,
   -0.005505075,
   0.03389166,
   0.002170375,
   0.03913951,
   0.0161765,
   -0.02251017,
   0.02655441,
   -0.0003018492,
   -0.006591306,
   -0.005515433,
   -0.001080655,
   -0.01799322,
   -0.03501195,
   -0.02189957,
   0.01707333,
   -0.03931789,
   -0.0345443};
   Double_t Graph0_fex1019[22] = {
   0.1560282,
   0.07840967,
   0.05265271,
   0.03561509,
   0.02855406,
   0.02572918,
   0.02439917,
   0.02356317,
   0.02386365,
   0.0239283,
   0.02569708,
   0.02696504,
   0.03024491,
   0.03312442,
   0.037755,
   0.04159103,
   0.04798117,
   0.05761162,
   0.06909077,
   0.07878472,
   0.1575697,
   0.9491119};
   Double_t Graph0_fey1019[22] = {
   1.289195,
   0.1149178,
   0.05617639,
   0.03355135,
   0.02301199,
   0.01889259,
   0.01661765,
   0.01497983,
   0.01403726,
   0.01325294,
   0.0132599,
   0.01281463,
   0.01328093,
   0.01338514,
   0.0140499,
   0.01427246,
   0.01509651,
   0.01647794,
   0.01794104,
   0.01981498,
   0.04944707,
   0.4814598};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","S12",100,115.0581,3139.41);
   Graph_Graph01019->SetMinimum(-0.03114418);
   Graph_Graph01019->SetMaximum(0.0580164);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01019->GetXaxis()->SetRange(21,79);
   Graph_Graph01019->GetXaxis()->CenterTitle(true);
   Graph_Graph01019->GetXaxis()->SetLabelFont(42);
   Graph_Graph01019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01019->GetXaxis()->SetTitleFont(42);
   Graph_Graph01019->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01019->GetYaxis()->CenterTitle(true);
   Graph_Graph01019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01019->GetYaxis()->SetLabelFont(42);
   Graph_Graph01019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01019->GetYaxis()->SetTitleFont(42);
   Graph_Graph01019->GetZaxis()->SetLabelFont(42);
   Graph_Graph01019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01019);
   
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
