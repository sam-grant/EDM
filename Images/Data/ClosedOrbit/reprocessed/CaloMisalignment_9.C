void CaloMisalignment_9()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 19 03:29:49 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-3.156,-2.886436,28.404,2.148448);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[24] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24};
   Double_t Graph0_fy1005[24] = {
   -0.5985054,
   -1.509841,
   1.168355,
   0.09426036,
   1.142649,
   1.1771,
   1.275844,
   -1.271952,
   -2.013796,
   -0.3949193,
   -0.2478884,
   0.07227407,
   0.6073094,
   0.2629823,
   0.4225001,
   -0.3267905,
   0.7865657,
   0.8679546,
   -0.8757106,
   -0.0371838,
   -0.1699824,
   -0.5171862,
   -0.4983242,
   0.4071162};
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
   0.03000487,
   0.03190531,
   0.03397258,
   0.0339174,
   0.03221173,
   0.03240799,
   0.03345652,
   0.03234269,
   0.03349269,
   0.03232917,
   0.03202328,
   0.02953827,
   0.02629211,
   0.03040165,
   0.02925919,
   0.03259314,
   0.03233834,
   0.02916653,
   0.0281354,
   0.0317217,
   0.03253015,
   0.03178197,
   0.03078477,
   0.02974569};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("18 kV, N=9");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","18 kV, N=9",100,0,26.3);
   Graph_Graph01005->SetMinimum(-2.382947);
   Graph_Graph01005->SetMaximum(1.64496);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01005->SetLineColor(ci);
   Graph_Graph01005->GetXaxis()->SetTitle("Calo number");
   Graph_Graph01005->GetXaxis()->SetRange(1,96);
   Graph_Graph01005->GetXaxis()->CenterTitle(true);
   Graph_Graph01005->GetXaxis()->SetLabelFont(42);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetXaxis()->SetTitleFont(42);
   Graph_Graph01005->GetYaxis()->SetTitle("y_{data} #minus y_{func} [mm]");
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
   
   gre->Draw("ab");
   
   TPaveText *pt = new TPaveText(0.3989196,0.9362587,0.6010804,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("18 kV, N=9");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
