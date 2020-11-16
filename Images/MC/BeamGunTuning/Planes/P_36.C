void P_36()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_36__76 = new TH1F("P_36__76","Plane 36",110,0,3300);
   P_36__76->SetBinContent(99,1);
   P_36__76->SetBinContent(103,1);
   P_36__76->SetBinContent(104,425);
   P_36__76->SetEntries(427);
   P_36__76->SetLineWidth(3);
   P_36__76->GetXaxis()->SetTitle("Momentum [MeV]");
   P_36__76->GetXaxis()->CenterTitle(true);
   P_36__76->GetXaxis()->SetLabelFont(42);
   P_36__76->GetXaxis()->SetTitleSize(0.04);
   P_36__76->GetXaxis()->SetTitleOffset(1.1);
   P_36__76->GetXaxis()->SetTitleFont(42);
   P_36__76->GetYaxis()->SetTitle("Ghost tracks");
   P_36__76->GetYaxis()->CenterTitle(true);
   P_36__76->GetYaxis()->SetNdivisions(4000510);
   P_36__76->GetYaxis()->SetLabelFont(42);
   P_36__76->GetYaxis()->SetTitleSize(0.04);
   P_36__76->GetYaxis()->SetTitleOffset(1.1);
   P_36__76->GetYaxis()->SetTitleFont(42);
   P_36__76->GetZaxis()->SetLabelFont(42);
   P_36__76->GetZaxis()->SetTitleOffset(1);
   P_36__76->GetZaxis()->SetTitleFont(42);
   P_36__76->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
