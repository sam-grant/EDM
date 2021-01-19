void ytot_vs_theta()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 13 17:10:08 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,-0.2068435,443.8125,0.3061678);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1005[24] = {
   0.03310071,
   0.06280808,
   0.03090982,
   0.03749229,
   0.02930681,
   -0.06814258,
   -0.06749188,
   0.02425735,
   0.04148432,
   0.01150011,
   0.1067355,
   0.02858285,
   -0.04470157,
   0.09901113,
   0.05569575,
   0.1009762,
   0.000944256,
   0.1107877,
   0.05825904,
   0.06495202,
   0.07344372,
   0.1689037,
   0.04689925,
   -0.05845031};
   Double_t Graph0_fex1005[24] = {
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
   0,
   0,
   0};
   Double_t Graph0_fey1005[24] = {
   0.05145174,
   0.05155554,
   0.05181469,
   0.05196647,
   0.05083602,
   0.05239642,
   0.05384972,
   0.05300446,
   0.05268359,
   0.05332598,
   0.05112242,
   0.05160088,
   0.04899288,
   0.05127523,
   0.05069184,
   0.05255861,
   0.05316024,
   0.05159018,
   0.05044439,
   0.05280405,
   0.05204361,
   0.05176226,
   0.05158402,
   0.05284049};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Low energy threshold: 750 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","Low energy threshold: 750 MeV",100,0,394.5);
   Graph_Graph01005->SetMinimum(-0.1555424);
   Graph_Graph01005->SetMaximum(0.2548667);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01005->SetLineColor(ci);
   Graph_Graph01005->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01005->GetXaxis()->CenterTitle(true);
   Graph_Graph01005->GetXaxis()->SetLabelFont(42);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetXaxis()->SetTitleFont(42);
   Graph_Graph01005->GetYaxis()->SetTitle("y [mm]");
   Graph_Graph01005->GetYaxis()->CenterTitle(true);
   Graph_Graph01005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01005->GetYaxis()->SetLabelFont(42);
   Graph_Graph01005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetYaxis()->SetTitleFont(42);
   Graph_Graph01005->GetZaxis()->SetLabelFont(42);
   Graph_Graph01005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01005);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.2167588,0.9341608,0.7832412,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Low energy threshold: 750 MeV");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
