void S12S18_Ag2_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:58:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8865,-2.598061,2728.021,1.909122);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[22] = {
   367.2357,
   456.7094,
   570.1064,
   694.7384,
   815.8181,
   938.6515,
   1062.74,
   1188.098,
   1312.711,
   1435.779,
   1562.01,
   1685.105,
   1810.597,
   1935.076,
   2060.311,
   2184.992,
   2309.087,
   2433.142,
   2559.748,
   2678.663,
   2780.904,
   2886.857};
   Double_t Graph0_fy1039[22] = {
   -0.3444694,
   -0.1725564,
   0.008930081,
   -0.02613759,
   -0.009593595,
   0.02543992,
   -0.01025469,
   -0.02413863,
   0.003385625,
   0.001748827,
   0.01066401,
   0.01757343,
   -0.02557341,
   -0.02277989,
   -0.01868667,
   -0.003720014,
   -0.001319412,
   -0.03461742,
   0.01483735,
   -0.007120738,
   0.04563308,
   -0.3967034};
   Double_t Graph0_fex1039[22] = {
   0.1835482,
   0.09181292,
   0.06165579,
   0.04212079,
   0.03405696,
   0.03070085,
   0.0292026,
   0.02820956,
   0.02864864,
   0.02884614,
   0.0309262,
   0.03266457,
   0.03671056,
   0.04027293,
   0.04611049,
   0.05082832,
   0.0587242,
   0.07083069,
   0.08409929,
   0.09634159,
   0.1950596,
   1.250899};
   Double_t Graph0_fey1039[22] = {
   1.502394,
   0.1348169,
   0.06578651,
   0.03956331,
   0.02743181,
   0.02253291,
   0.01985553,
   0.01791682,
   0.01680544,
   0.01597024,
   0.01592623,
   0.01547279,
   0.01607027,
   0.01627397,
   0.01712583,
   0.0175274,
   0.01845045,
   0.02018968,
   0.02175518,
   0.02404853,
   0.0613618,
   0.6128803};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S12S18",100,114.9465,3140.214);
   Graph_Graph01039->SetMinimum(-2.147342);
   Graph_Graph01039->SetMaximum(1.458404);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(21,79);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
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
