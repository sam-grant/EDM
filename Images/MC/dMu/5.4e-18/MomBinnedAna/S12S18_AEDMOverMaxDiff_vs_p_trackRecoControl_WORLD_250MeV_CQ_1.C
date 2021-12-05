void S12S18_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 20:08:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.3314,-0.0007515904,3033.782,-0.0003808329);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1093[12] = {
   188.9695,
   434.5943,
   652.6751,
   883.9274,
   1126.188,
   1373.751,
   1622.443,
   1870.726,
   2119.143,
   2366.618,
   2613.353,
   2824.104};
   Double_t Graph0_fy1093[12] = {
   -0.01250839,
   -0.0005555838,
   -0.0004283594,
   -0.0006917461,
   -0.0007148266,
   -0.0008952103,
   -0.0008129445,
   -0.0008173125,
   -0.0005045753,
   -0.0005298293,
   -0.0004942876,
   -0.0003584991};
   Double_t Graph0_fex1093[12] = {
   0.713896,
   0.1447174,
   0.07967201,
   0.05375521,
   0.04973886,
   0.04976407,
   0.05188342,
   0.0561289,
   0.06355781,
   0.07480592,
   0.09437211,
   0.1178736};
   Double_t Graph0_fey1093[12] = {
   -0.006185847,
   -0.0007851619,
   -0.0002535905,
   -0.0001332421,
   -0.0001014648,
   -8.744011e-05,
   -7.963029e-05,
   -7.604711e-05,
   -7.539435e-05,
   -7.677601e-05,
   -8.226709e-05,
   -0.000119923};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01093 = new TH1F("Graph_Graph01093","S12S18_",100,0,3087.819);
   Graph_Graph01093->SetMinimum(-0.0007145146);
   Graph_Graph01093->SetMaximum(-0.0004179087);
   Graph_Graph01093->SetDirectory(0);
   Graph_Graph01093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01093->SetLineColor(ci);
   Graph_Graph01093->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01093->GetXaxis()->SetRange(25,90);
   Graph_Graph01093->GetXaxis()->CenterTitle(true);
   Graph_Graph01093->GetXaxis()->SetLabelFont(42);
   Graph_Graph01093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01093->GetXaxis()->SetTitleFont(42);
   Graph_Graph01093->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01093->GetYaxis()->CenterTitle(true);
   Graph_Graph01093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01093->GetYaxis()->SetLabelFont(42);
   Graph_Graph01093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01093->GetYaxis()->SetTitleFont(42);
   Graph_Graph01093->GetZaxis()->SetLabelFont(42);
   Graph_Graph01093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01093);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
